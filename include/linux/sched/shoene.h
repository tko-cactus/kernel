#include <linux/sched.h>

#ifndef _SCHED_SHOENE_H
#define _SCHED_SHOENE_H

#define MAX_SHOENE_PRIO 0

static inline int shoene_prio(int prio)
{
  if (unlikely(prio < MAX_SHOENE_PRIO))
    return 1;
  return 0;
}

static inline int shoene_task(struct task_struct *p)
{
  return shoene_prio(p->prio);
}

#endif /* _SCHED_ENERGY_H */
