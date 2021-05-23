/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSOperationQueue;

@interface HMFScheduler

{
    NSOperationQueue *_operationQueue;
}

+ (id)defaultScheduler;
+ (id)mainScheduler;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)performBlock:(CDUnknownBlockType)arg1;
- (id)performOperation:(id)arg1;
- (id)performWithQualityOfService:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4;

@end
