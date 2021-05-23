/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOperation.h>

__attribute__((visibility("hidden")))
@interface _NSBarrierOperation : NSOperation

{
    CDUnknownBlockType _block;
}

+ (_Bool)_removesDependenciesAfterFinish;

- (void)dealloc;
- (void)main;
- (long long)queuePriority;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
