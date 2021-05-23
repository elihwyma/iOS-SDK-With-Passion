/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCellularPlanManager, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemGroup : NSObject

{
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

@property (weak, nonatomic) PSListController *listController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)specifiersForCarrierItems;
- (void)carrierItemPressed:(id)arg1;
- (_Bool)hasCarrierItems;

@end
