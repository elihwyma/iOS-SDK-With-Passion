/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKActivitySummary, HKActivityTodayWidgetView, HKDateCache, HKGradientView, HKHealthStore, NSDateComponents, NSString, UILabel, UIView, WDProfile, _HKWheelchairUseCharacteristicCache;

__attribute__((visibility("hidden")))
@interface WDActivityTodayWidgetTableViewCell : UITableViewCell

{
    HKActivityTodayWidgetView *_activityTodayWidgetView;
    HKActivitySummary *_currentActivitySummary;
    NSDateComponents *_currentDateComponents;
    HKGradientView *_backgroundGradientView;
    UIView *_titleSeparatorView;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    HKHealthStore *_healthStore;
    HKDateCache *_dateCache;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    WDProfile *_profile;
    _Bool _isWheelchairUser;
    unsigned long long _marginMode;
}

@property (nonatomic) unsigned long long marginMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredCellHeight;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupSubviews;
- (void)_setupConstraints;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(_Bool)arg2;
- (void)_updateDateLabel;
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profile:(id)arg3;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (id)_activeEnergyUnit;
- (id)_basalEnergyUnit;
- (void)_updateActivitySummaryAnimated:(_Bool)arg1;
- (void)_updateTimeBasedUI;
- (void)_setIsWheelchairUser:(_Bool)arg1;
- (struct CGRect)forceTouchFrame;

@end
