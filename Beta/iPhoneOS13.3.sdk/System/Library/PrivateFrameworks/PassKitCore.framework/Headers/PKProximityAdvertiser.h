/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class SFService;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityAdvertiser : NSObject

{
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
    _Bool _isAdvertising;
}

@property (nonatomic, readonly) _Bool isAdvertising;

- (id)init;
- (void)dealloc;
- (void)endAdvertising;
- (CDUnknownBlockType)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_endAdvertising;
- (void)startAdvertisingForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
