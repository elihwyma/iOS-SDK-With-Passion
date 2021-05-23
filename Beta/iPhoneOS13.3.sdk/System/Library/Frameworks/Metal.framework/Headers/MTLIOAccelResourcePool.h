/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLIOAccelDevice;

@protocol MTLDevice;

@interface MTLIOAccelResourcePool : NSObject

{
    struct _MTLIOAccelResourcePoolPrivate _priv;
    Class _resourceClass;
    MTLIOAccelDevice<MTLDevice> *_device;
    struct IOAccelNewResourceArgs *_resourceArgs;
    unsigned int _resourceArgsSize;
    unsigned long long age_to_purge;
    unsigned int generation;
}

@property (readonly) struct IOAccelNewResourceArgs *resourceArgs;
@property (readonly) unsigned int resourceArgsSize;

- (void)dealloc;
- (void)purge;
- (void)purgeWithLock;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const struct IOAccelNewResourceArgs *)arg3 resourceArgsSize:(unsigned int)arg4 options:(id)arg5;
- (void)setResourceArgs:(const struct IOAccelNewResourceArgs *)arg1 resourceArgsSize:(unsigned int)arg2;
- (int)availableCount;
- (_Bool)updateResourcePurgeability;

@end
