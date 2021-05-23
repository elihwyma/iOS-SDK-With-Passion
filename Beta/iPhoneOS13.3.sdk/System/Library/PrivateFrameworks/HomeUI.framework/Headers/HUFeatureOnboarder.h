/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUFeatureOnboardingConfigurator, NAFuture, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, UIViewController;

@protocol HUConfigurationViewController;

@interface HUFeatureOnboarder : NSObject

{
    _Bool _restart;
    _Bool _hasPerformedPostProcessing;
    NSMutableDictionary *_userInputResults;
    NAFuture *_completionFuture;
    HUFeatureOnboardingConfigurator *_configurator;
    NSMutableArray *_allRemainingFlowGroups;
    UINavigationController *_navController;
    UIViewController<HUConfigurationViewController> *__currentViewControllerForTests;
}

@property (retain, nonatomic) HUFeatureOnboardingConfigurator *configurator;
@property (retain, nonatomic) NSMutableDictionary *userInputResults;
@property (retain, nonatomic) NAFuture *completionFuture;
@property (retain, nonatomic) NSMutableArray *allRemainingFlowGroups;
@property (retain, nonatomic) UINavigationController *navController;
@property (weak) UIViewController<HUConfigurationViewController> *_currentViewControllerForTests;
@property (nonatomic) _Bool hasPerformedPostProcessing;
@property (nonatomic) _Bool restart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGroupedFeatures:(id)arg1 usageOptions:(id)arg2;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)_findNextAppropriateFlow:(id)arg1;
- (void)_skipAnyFlowsNoLongerRequired;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (void)configuratorDidFinish:(id)arg1;
- (void)configuratorDidUpdateViewController:(id)arg1;
- (id)getNextViewControllerForOnboardingInput:(id)arg1;
- (void)restartCurrentOnboarding;
- (id)initWithFeatures:(id)arg1 usageOptions:(id)arg2;
- (void)startOnboardingWithPresentingViewController:(id)arg1;

@end
