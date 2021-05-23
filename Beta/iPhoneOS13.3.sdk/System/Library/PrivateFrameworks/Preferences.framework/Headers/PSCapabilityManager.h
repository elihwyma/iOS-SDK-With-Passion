/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface PSCapabilityManager : NSObject

{
    NSMutableDictionary *_overrides;
    NSNumber *_overrideForAllBoolValues;
}

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;

+ (id)sharedManager;

- (id)init;
- (_Bool)capabilityBoolAnswer:(id)arg1;
- (id)preferencesCapabilityAnswer:(id)arg1;
- (id)capabilityAnswer:(id)arg1;
- (id)supportsDisplayZoomCapability;
- (id)applicationDisplayIdentifiers;
- (id)supportsRaiseToWakeCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsNightShiftCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsInEDUModeCapability;
- (id)supportsPSTTYCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (void)setOverrideValue:(id)arg1 forKey:(id)arg2;
- (void)resetOverrides;
- (_Bool)hasCapabilities:(id)arg1;

@end
