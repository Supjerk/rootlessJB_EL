int vnode_lookup(const char *path, int flags, uint64_t *vnode, uint64_t vfs_context);
uint64_t get_vfs_context();
int vnode_put(uint64_t vnode);
unsigned int init_offsets();
