/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmem : NSObject

{
    struct _MTLIOAccelDeviceShmemPrivate _priv;
    MTLIOAccelDevice *_device;
    unsigned int _shmemID;
    unsigned int _shmemSize;
    void *_virtualAddress;
    _Bool purgeable;
}

@property (readonly) void *virtualAddress;
@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 shmemSize:(unsigned int)arg2;

@end
