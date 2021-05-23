/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDAxis.h>

__attribute__((visibility("hidden")))
@interface CHDCategoryAxis : CHDAxis

{
    _Bool mAutomatic;
    _Bool mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    _Bool mLabelFrequencyAutomatic;
    _Bool mShowSeriesNames;
}

- (_Bool)isAutomatic;
- (int)labelAlignment;
- (void)setAutomatic:(_Bool)arg1;
- (id)initWithResources:(id)arg1;
- (void)setLabelAlignment:(int)arg1;
- (void)setLabelFrequency:(long long)arg1;
- (long long)labelFrequency;
- (void)adjustAxisPositionForHorizontalChart;
- (_Bool)isNoMultipleLabellevel;
- (void)setNoMultipleLevelLabel:(_Bool)arg1;
- (void)setShowSeriesLabels:(_Bool)arg1;
- (_Bool)showSeriesLabels;
- (_Bool)isLabelFrequencyAutomatic;

@end
