/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFActionSetSuggestionFilter, HMActionSet, HMHome, NSArray;

@interface HFActionSetSuggestionVendor : NSObject

{
    HFActionSetSuggestionFilter *_filter;
    HMActionSet *_actionSet;
    HMHome *_home;
    NSArray *_services;
}

@property (nonatomic, readonly) NSArray *services;
@property (nonatomic, readonly) HFActionSetSuggestionFilter *filter;
@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) HMHome *home;

+ (id)supportedBuiltInActionSetTypes;

- (id)init;
- (id)build;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2 filter:(id)arg3;
- (id)buildWithOutDependentServiceTypes:(out id *)arg1;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)_actionBuildersForCustomActionSet;
- (id)_actionBuildersForBuiltInActionSetWithType:(id)arg1 outDependentServiceTypes:(out id *)arg2;
- (id)_actionBuildersToSetPowerState:(_Bool)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetLightbulbBrightness:(double)arg1;
- (id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg1;
- (id)_actionBuildersToSetTargetBlindsPositionOpen:(_Bool)arg1;
- (id)_actionBuildersToSetTargetDoorState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetLockState:(long long)arg1 forServicesOfTypes:(id)arg2;
- (id)_actionBuildersToSetTargetSecuritySystemState:(long long)arg1;
- (id)_controlItemValueSourceForService:(id)arg1;
- (id)_actionBuildersForCustomActionSetWithService:(id)arg1;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1;
- (id)_deriveActionForSecondaryCharacteristic:(id)arg1 candidateServices:(id)arg2;
- (id)_deriveActionForPrimaryCharacteristic:(id)arg1 candidateServices:(id)arg2 targetThreshold:(double)arg3;

@end
