/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCarrierSpaceUsageAccountMetrics, CTCarrierSpaceUsagePlanMetrics, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageSection : NSObject

{
    NSString *_sharedPlanIdentifier;
    CTCarrierSpaceUsagePlanMetrics *_primaryMetrics;
    CTCarrierSpaceUsageAccountMetrics *_accountMetrics;
    NSMutableArray *_otherMetrics;
    NSMutableArray *_barCategories;
}

@property (retain) NSString *sharedPlanIdentifier;
@property (retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics;
@property (retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics;
@property (retain) NSMutableArray *otherMetrics;
@property (retain) NSMutableArray *barCategories;

- (id)description;
- (_Bool)isSharedPlan;

@end
