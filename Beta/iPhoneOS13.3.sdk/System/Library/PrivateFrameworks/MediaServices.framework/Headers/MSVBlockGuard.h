/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class MSVTimer;

@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _disarmed;
    _Bool _didTimeout;
    MSVTimer *_timeoutTimer;
    CDUnknownBlockType _interruptionHandler;
}

- (id)init;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1;
- (_Bool)disarm;
- (id)initWithDeallocHandler:(CDUnknownBlockType)arg1;
- (id)initWithTimeout:(double)arg1 interruptionHandler:(CDUnknownBlockType)arg2;
- (void)_interruptWithReason:(long long)arg1;

@end
