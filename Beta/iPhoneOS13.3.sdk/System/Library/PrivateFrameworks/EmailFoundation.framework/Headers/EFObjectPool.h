/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface EFObjectPool : NSObject

{
    NSMutableArray *_storage;
    CDUnknownBlockType _generator;
    CDUnknownBlockType _tearDown;
    struct os_unfair_lock_s _lock;
}

- (id)initWithCapacity:(unsigned long long)arg1 generator:(CDUnknownBlockType)arg2 tearDown:(CDUnknownBlockType)arg3;
- (id)initWithGenerator:(CDUnknownBlockType)arg1 tearDown:(CDUnknownBlockType)arg2;
- (id)acquireObject;
- (void)releaseObject:(id)arg1;

@end
