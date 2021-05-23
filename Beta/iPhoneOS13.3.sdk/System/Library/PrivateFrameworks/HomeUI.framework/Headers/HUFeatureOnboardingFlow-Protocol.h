/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NAFuture, UIViewController;

@protocol HUConfigurationViewController;

@protocol HUFeatureOnboardingFlow <Swift>

@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (nonatomic, readonly) _Bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic, readonly) _Bool shouldAbortAllOnboarding;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;

- (unsigned short)processUserInput: /* Error: Ran out of types for this method. */;

@end
