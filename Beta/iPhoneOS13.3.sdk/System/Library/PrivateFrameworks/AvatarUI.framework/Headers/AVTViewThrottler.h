/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTView, NSString, NSTimer;

@protocol AVTDeviceResourceConsumerDelegate, AVTUILogger;

@interface AVTViewThrottler : NSObject

{
    _Bool _throttling;
    id <AVTDeviceResourceConsumerDelegate> _consumerDelegate;
    AVTView *_avtView;
    id <AVTUILogger> _logger;
    NSTimer *_autoUnthrottlingTimer;
}

@property (nonatomic, readonly) AVTView *avtView;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (retain, nonatomic) NSTimer *autoUnthrottlingTimer;
@property (nonatomic) _Bool throttling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTDeviceResourceConsumerDelegate> consumerDelegate;

- (void)dealloc;
- (void)throttle;
- (void)unthrottle;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (id)initWithAVTView:(id)arg1 environment:(id)arg2;
- (void)cancelAutoUnthrottling;
- (void)applyThrottling;
- (void)scheduleAutoUnthrottlingAfterDelay:(double)arg1;
- (void)autoUnthrottle;
- (void)throttleForDelay:(double)arg1;

@end
