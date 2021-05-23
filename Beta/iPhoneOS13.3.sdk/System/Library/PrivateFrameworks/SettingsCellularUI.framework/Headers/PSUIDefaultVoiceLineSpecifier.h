/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, NSArray, PSSimStatusCache, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIDefaultVoiceLineSpecifier : PSSpecifier

{
    NSArray *_cachedPlanItems;
    PSUICellularPlanManagerCache *_planManagerCache;
    CTCellularPlanManager *_planManager;
    PSSimStatusCache *_simStatusCache;
    NSArray *_cachedSubscriptionContexts;
}

@property (retain, nonatomic) NSArray *cachedPlanItems;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) CTCellularPlanManager *planManager;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) NSArray *cachedSubscriptionContexts;
@property (nonatomic, readonly) _Bool isSubcontrollerNeeded;

- (id)initWithPlanManagerCache:(id)arg1 planManager:(id)arg2 simStatusCache:(id)arg3;
- (void)setDefaultVoiceLine:(id)arg1 specifier:(id)arg2;
- (id)defaultVoiceLine:(id)arg1;
- (void)updateCachedState;
- (id)planItemForListItem:(id)arg1;
- (id)initSpecifier;
- (id)subscriptionContextForListItem:(id)arg1;

@end
