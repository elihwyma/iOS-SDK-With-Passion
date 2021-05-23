/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/Swift-Protocol.h>

@class UIView;

@protocol SiriUISiriStatusViewDelegate;

@protocol SiriUISiriStatusViewProtocol <Swift>

@property (nonatomic) long long mode;
@property (nonatomic) double flamesViewWidth;
@property (nonatomic) double disabledMicOpacity;
@property (weak, nonatomic) id <SiriUISiriStatusViewDelegate> delegate;
@property (nonatomic, readonly) UIView *flamesContainerView;
@property (nonatomic) _Bool flamesViewDeferred;
@property (nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode;
@property (nonatomic) _Bool paused;
@property (nonatomic, readonly) double statusViewHeight;

- (unsigned short)fadeOutCurrentAura;
- (unsigned short)setupOrbIfNeeded;
- (unsigned short)forceMicVisible: /* Error: Ran out of types for this method. */;

@end
