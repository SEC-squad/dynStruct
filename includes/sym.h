#ifndef SYM_H_
#define SYM_H_

#include "drsyms.h"
#include "hashtable.h"

typedef struct old_sym_s
{
  struct old_sym_s	*next;
  char			*sym;
} old_sym_t;

typedef struct
{
  void	*start;
  void	*got;
} ds_module_data_t;

bool sym_to_hashmap(drsym_info_t *info, drsym_error_t status, void *data);
void clean_old_sym(void);

extern hashtable_t	sym_hashtab;
extern old_sym_t	*old_symlist;
#endif
