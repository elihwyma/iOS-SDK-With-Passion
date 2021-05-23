/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLResourceListPool : NSObject

{
    struct _MTLResourceListPoolPrivate _priv;
    int _resourceListCapacity;
}

- (void)dealloc;
- (void)purge;
- (int)availableCount;
- (id)initWithResourceListCapacity:(int)arg1;

@end
