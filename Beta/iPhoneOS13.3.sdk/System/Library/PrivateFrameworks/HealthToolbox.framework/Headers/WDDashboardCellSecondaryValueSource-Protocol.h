/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@class NSAttributedString, NSDate;

@protocol WDDashboardCellSecondaryValueSourceDelegate;

@protocol WDDashboardCellSecondaryValueSource

@property (weak, nonatomic) id <WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;
@property (nonatomic, readonly) NSAttributedString *secondaryValue;
@property (nonatomic, readonly) long long timeScope;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

@end
