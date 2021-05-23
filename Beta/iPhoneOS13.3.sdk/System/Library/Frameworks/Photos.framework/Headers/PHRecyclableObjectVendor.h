/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject

{
    NSMutableArray *_recycledObjects;
    Class _targetClass;
    struct os_unfair_lock_s _lock;
    _Bool _repsondsToPrepareForReuse;
    _Bool _threadSafe;
    CDUnknownBlockType _builder;
}

- (id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(_Bool)arg2 initialPoolSize:(long long)arg3 prototypeStep:(CDUnknownBlockType)arg4;
- (id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(_Bool)arg2 initialPoolSize:(long long)arg3;
- (id)dequeueRecyclableObject;
- (void)recycleObject:(id)arg1;

@end
