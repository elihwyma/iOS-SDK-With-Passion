/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMHome, NAFuture, NSDictionary, NSString, UIViewController;

@protocol HUConfigurationViewController;

@interface HULanguageSetupOnboardingFlow : NSObject

{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    _Bool _forceOnboardingFinishedForErrorRecovery;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    unsigned long long _languageOnboardingFlowType;
    NSDictionary *_usageOptions;
    NSString *_assistantDeviceIntendedRecognitionLanguage;
}

@property (nonatomic) _Bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) _Bool shouldAbortAllOnboarding;
@property (nonatomic) _Bool forceOnboardingFinishedForErrorRecovery;
@property (nonatomic) unsigned long long languageOnboardingFlowType;
@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) NSString *assistantDeviceIntendedRecognitionLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;

- (id)processUserInput:(id)arg1;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)_determineNextViewControllerWithPriorResults:(id)arg1;

@end
