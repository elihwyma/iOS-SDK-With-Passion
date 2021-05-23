/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SMBShare : NSObject

{
    struct _opaque_pthread_mutex_t statfs_lock;
    unsigned int _tree_id;
    unsigned int _share_type;
    unsigned int _share_capabilities;
    unsigned int _share_flags;
    unsigned int _share_max_access;
    unsigned int _sectors_per_alloc_unit;
    unsigned int _bytes_per_sector;
    unsigned int _fs_block_size;
    unsigned int _file_system_attrs;
    unsigned int _max_component_name_len;
    unsigned int _fstype;
    unsigned int _isEncrypted;
    NSString *_sharename;
    unsigned long long _total_alloc_units;
    unsigned long long _avail_alloc_units;
    unsigned long long _fs_iosize;
    unsigned long long _fs_blocks;
    unsigned long long _fs_blocks_free;
    unsigned long long _fs_blocks_avail;
    unsigned long long _fs_files;
    unsigned long long _fs_files_free;
    NSString *_file_system_name;
}

@property unsigned int tree_id;
@property unsigned int share_type;
@property unsigned int share_capabilities;
@property unsigned int share_flags;
@property unsigned int share_max_access;
@property (retain) NSString *sharename;
@property unsigned long long total_alloc_units;
@property unsigned long long avail_alloc_units;
@property unsigned int sectors_per_alloc_unit;
@property unsigned int bytes_per_sector;
@property unsigned int fs_block_size;
@property unsigned long long fs_iosize;
@property unsigned long long fs_blocks;
@property unsigned long long fs_blocks_free;
@property unsigned long long fs_blocks_avail;
@property unsigned long long fs_files;
@property unsigned long long fs_files_free;
@property unsigned int file_system_attrs;
@property unsigned int max_component_name_len;
@property (retain) NSString *file_system_name;
@property unsigned int fstype;
@property unsigned int isEncrypted;

- (id)init;
- (void)dealloc;
- (void)statfs_lock;
- (void)statfs_unlock;

@end
