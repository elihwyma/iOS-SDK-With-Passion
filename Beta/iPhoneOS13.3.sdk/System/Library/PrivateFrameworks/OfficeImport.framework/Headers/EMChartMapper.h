/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class CHDAxis, CHDChart, CHDChartType, CHDSeries, CMDrawableMapper, CMState, EDResources;

__attribute__((visibility("hidden")))
@interface EMChartMapper : CMMapper

{
    CHDChart *mChart;
    CMState *mState;
    EDResources *mResources;
    CHDChartType *mMainType;
    CHDSeries *mMainSeries;
    CHDAxis *mBaseAxis;
    CHDAxis *mPrimaryAxis;
    CHDAxis *mSecondaryAxis;
    _Bool mIsHorizontal;
    _Bool mIsStacked;
    _Bool mIsPercentStacked;
    unsigned long long mPieIndex;
    struct {
        _Bool primaryCategoryHasDates;
        _Bool secondaryCategoryHasDates;
        _Bool primaryAxisHasDates;
        _Bool secondaryAxisHasDates;
    } mPlotInfos;
    _Bool mHasDateCategory;
    _Bool mHasPrimaryDateAxis;
    _Bool mHasSecondaryDateAxis;
}

@property (weak, readonly) CMDrawableMapper *parent;

+ (struct CGColor *)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;
- (void)addLegendToDescription:(id)arg1 chartSize:(struct CGSize)arg2 withState:(id)arg3;
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (id)dateFromXlDateTimeNumber:(double)arg1;
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (id)initWithChart:(id)arg1 parent:(id)arg2;
- (id)copyPdfWithState:(id)arg1 withSize:(struct CGSize)arg2;

@end
