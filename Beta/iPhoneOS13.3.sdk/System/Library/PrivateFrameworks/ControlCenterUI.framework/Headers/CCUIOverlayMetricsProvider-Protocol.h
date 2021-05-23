/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/Swift-Protocol.h>

@class CCUIStatusBarStyleSnapshot;

@protocol CCUIOverlayMetricsProvider <Swift>

@property (nonatomic, readonly) struct CGRect overlayBackgroundFrame;
@property (nonatomic, readonly) struct CGRect overlayContainerFrame;
@property (nonatomic, readonly) long long overlayInterfaceOrientation;
@property (copy, nonatomic, readonly) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property (nonatomic, readonly) double overlayReachabilityHeight;

@end
