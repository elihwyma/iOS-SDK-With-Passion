/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanLabelSpecifier : PSSpecifier

{
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICellularPlanUniversalReference *_planReference;
}

@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;

- (id)cellularPlanLabel:(id)arg1;
- (void)updateValuesAndTitles;
- (id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2;

@end
