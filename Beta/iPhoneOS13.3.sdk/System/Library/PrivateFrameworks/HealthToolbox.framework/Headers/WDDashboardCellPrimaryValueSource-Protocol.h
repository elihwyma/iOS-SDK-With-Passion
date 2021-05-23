/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class HKDisplayCategory, HKDisplayType, NSDate, NSString;

@protocol WDDashboardCellPrimaryValueSourceDelegate;

@protocol WDDashboardCellPrimaryValueSource

@property (weak, nonatomic) id <WDDashboardCellPrimaryValueSourceDelegate> primaryValueSourceDelegate;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) HKDisplayCategory *displayCategory;
@property (nonatomic, readonly) NSString *primaryValueContextualText;
@property (nonatomic, readonly) NSDate *lastUpdated;

- (unsigned short)mostRecentValueWithValueFont:unitFont: /* Error: Ran out of types for this method. */;

@end
