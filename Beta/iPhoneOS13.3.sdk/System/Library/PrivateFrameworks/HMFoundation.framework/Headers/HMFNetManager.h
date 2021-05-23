/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSObject, _HMFNetManagerWoWAssertion;

@protocol OS_dispatch_queue;

@interface HMFNetManager

{
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HMFNetManagerWoWAssertion *_wowAssertion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) _HMFNetManagerWoWAssertion *wowAssertion;

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void)deregisterWoWAssertionForObject:(id)arg1;
- (void)deregisterObject:(id)arg1;
- (void)registerWoWAssertionForObject:(id)arg1;

@end
