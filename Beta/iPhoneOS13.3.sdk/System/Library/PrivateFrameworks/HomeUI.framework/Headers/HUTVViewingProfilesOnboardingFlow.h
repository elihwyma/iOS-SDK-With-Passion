/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMHome, NAFuture, NSString, UIViewController;

@protocol HUConfigurationViewController;

@interface HUTVViewingProfilesOnboardingFlow : NSObject

{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
}

@property (nonatomic) _Bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) _Bool shouldAbortAllOnboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;

- (id)processUserInput:(id)arg1;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (_Bool)_shouldShowOnboardingWithOptions:(id)arg1;

@end
