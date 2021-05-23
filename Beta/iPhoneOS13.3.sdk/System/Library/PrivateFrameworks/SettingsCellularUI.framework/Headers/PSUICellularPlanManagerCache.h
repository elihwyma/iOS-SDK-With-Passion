/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCellularPlanItem, NSArray, NSDictionary;

@interface PSUICellularPlanManagerCache : NSObject

{
    _Bool _cacheIsValid;
    NSArray *_planItems;
    NSArray *_danglingPlanItems;
    NSArray *_plansPendingTransfer;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    _Bool _hasSubscriptions;
    _Bool _isMultipleDataPlanSupportAvailable;
    _Bool _shouldShowOldUI;
    _Bool _isAnyLocalFlowTypeSupported;
    _Bool _isWebUIFlowSupported;
    _Bool _isActivationCodeFlowSupported;
    _Bool _isCarrierItemFlowSupported;
    _Bool _carrierListFetchInProgress;
    NSArray *_cachedCarrierItems;
}

@property (retain) NSArray *cachedCarrierItems;
@property _Bool carrierListFetchInProgress;
@property (retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property (nonatomic, readonly) NSArray *planItems;
@property (nonatomic, readonly) NSArray *danglingPlanItems;
@property (nonatomic, readonly) NSArray *plansPendingTransfer;
@property (nonatomic, readonly) NSArray *embeddedPlanItems;
@property (nonatomic, readonly) _Bool hasSubscriptions;
@property (nonatomic, readonly) _Bool isMultipleDataPlanSupportAvailable;
@property (nonatomic, readonly) _Bool shouldShowAddPlan;
@property (nonatomic, readonly) _Bool shouldShowDataPlanList;
@property (nonatomic, readonly) _Bool shouldShowAccountSetup;
@property (nonatomic, readonly) _Bool isSelectedPlanActivating;
@property (nonatomic, readonly) _Bool isAnyPlanActivating;
@property (nonatomic, readonly) _Bool shouldShowPlanSelector;
@property (nonatomic, readonly) _Bool shouldShowNewUI;
@property (nonatomic, readonly) _Bool isAnyLocalFlowTypeSupported;
@property (nonatomic, readonly) _Bool isWebUIFlowSupported;
@property (nonatomic, readonly) _Bool isActivationCodeFlowSupported;
@property (nonatomic, readonly) _Bool isCarrierItemFlowSupported;
@property (nonatomic, readonly) NSArray *carrierItems;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)planFromReference:(id)arg1;
- (id)predefinedLabels;
- (id)danglingPlanFromReference:(id)arg1;
- (id)planPendingTransferFromReference:(id)arg1;
- (id)subscriptionContextForPlanItem:(id)arg1 cachedSubscriptionContexts:(id)arg2;
- (void)setLabel:(id)arg1 forPlan:(id)arg2;
- (id)planFromReferenceSafe:(id)arg1;
- (void)clearCachedCarrierItems;
- (void)_planInfoDidChange;
- (void)_carrierInfoDidChange;
- (void)_invalidatePlanItemsCache;
- (void)_fetchPlanItemsIfNeeded;
- (_Bool)shouldShowOldUI;
- (void)setSelectedPlanItemForData:(id)arg1;
- (void)didSelectDanglingPlan:(id)arg1;

@end
