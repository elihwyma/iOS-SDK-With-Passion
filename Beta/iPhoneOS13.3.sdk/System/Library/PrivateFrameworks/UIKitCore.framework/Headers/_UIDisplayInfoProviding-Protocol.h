/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class FBSDisplayConfiguration;

@protocol _UIDisplayInfoProviding <Swift>

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic, readonly) struct UIEdgeInsets peripheryInsets;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortrait;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeRight;

@end
