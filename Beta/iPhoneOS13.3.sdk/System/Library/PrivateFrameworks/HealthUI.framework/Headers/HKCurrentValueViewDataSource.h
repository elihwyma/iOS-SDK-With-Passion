/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDateCache, HKDisplayCategoryController, HKDisplayType, HKHealthStore, HKSelectedRangeFormatter, NSArray, NSString, UIColor, UIFont;

@protocol HKCurrentValueViewDataSourceValueRangeFormatter;

@interface HKCurrentValueViewDataSource : NSObject

{
    _Bool _pendingData;
    NSArray *_selectedRangeData;
    id <HKCurrentValueViewDataSourceValueRangeFormatter> _valueRangeFormatter;
    UIColor *_titleColor;
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKDateCache *_dateCache;
    HKHealthStore *_healthStore;
    HKDisplayCategoryController *_displayCategoryController;
    HKDisplayType *_displayType;
    NSString *_dateIntervalString;
    UIColor *_valueColor;
    UIFont *_majorFont;
    UIFont *_minorFont;
}

@property (retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSString *dateIntervalString;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *valueColor;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (retain, nonatomic) NSArray *selectedRangeData;
@property (weak, nonatomic) id <HKCurrentValueViewDataSourceValueRangeFormatter> valueRangeFormatter;
@property (nonatomic) _Bool pendingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;

- (long long)_numberOfColumns;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)attributedTitleStringForCurrentValueView:(id)arg1;
- (id)attributedValueStringForCurrentValueView:(id)arg1;
- (id)textColorForCurrentValueView:(id)arg1;
- (id)secondaryTextColorForCurrentValueView:(id)arg1;
- (id)secondaryStringForCurrentValueView:(id)arg1;
- (id)_dividerForRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3;
- (_Bool)_rangeDataIsBloodPressure:(id)arg1;
- (_Bool)_rangeDataIsMenstruation:(id)arg1;
- (_Bool)_rangeDataIsSleep:(id)arg1;
- (_Bool)_isAudioExposureDisplayType;
- (_Bool)_isMenstruationDisplayType;
- (id)_selectedRangeDataForColumnAtIndex:(long long)arg1;
- (_Bool)_isDataMinMax;

@end
