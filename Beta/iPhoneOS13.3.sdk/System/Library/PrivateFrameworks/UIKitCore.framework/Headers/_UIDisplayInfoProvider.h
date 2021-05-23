/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class FBSDisplayConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface _UIDisplayInfoProvider : NSObject

{
    FBSDisplayConfiguration *displayConfiguration;
    unsigned long long artworkSubtype;
    double homeAffordanceOverlayAllowance;
    double systemMinimumMargin;
    struct UIEdgeInsets peripheryInsets;
    struct UIEdgeInsets safeAreaInsetsPortrait;
    struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
    struct UIEdgeInsets safeAreaInsetsLandscapeRight;
    struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
