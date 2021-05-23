/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLIOAccelDeviceShmemPool : NSObject

{
    struct _MTLIOAccelDeviceShmemPoolPrivate _priv;
}

- (void)dealloc;
- (void)purge;
- (void)prune;
- (unsigned int)shmemSize;
- (int)availableCount;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned int)arg3 options:(id)arg4;
- (void)setShmemSize:(unsigned int)arg1;

@end
