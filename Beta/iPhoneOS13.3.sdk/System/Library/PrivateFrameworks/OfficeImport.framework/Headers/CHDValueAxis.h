/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDAxis.h>

__attribute__((visibility("hidden")))
@interface CHDValueAxis : CHDAxis

{
    _Bool mPercentageFormattingFlag;
    _Bool mAutoMajorUnitValue;
    _Bool mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
    int mBuiltInUnit;
    _Bool mShowBuiltInUnit;
}

- (id)initWithResources:(id)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (void)setScalingLogBase:(double)arg1;
- (void)setBuiltInUnit:(int)arg1;
- (void)setShowBuiltInUnitFlag:(_Bool)arg1;
- (double)minorUnitValue;
- (_Bool)isAutoMinorUnitValue;
- (double)majorUnitValue;
- (_Bool)isAutoMajorUnitValue;
- (double)scalingLogBase;
- (void)adjustAxisPositionForHorizontalChart;
- (_Bool)isShowBuiltInUnit;
- (int)builtInUnit;
- (id)contentFormatWithBuiltInUnit;
- (void)setPercentageFormattingFlag:(_Bool)arg1;
- (_Bool)isPercentageFormattingFlag;

@end
