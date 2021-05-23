/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)dispatcherWithIdentifier:(id)arg1;
+ (id)dispatcherWithQueue:(id)arg1;

- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (CDUnknownBlockType)qosUserInteractiveDispatchBlockForBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)boostQualityOfService;

@end
