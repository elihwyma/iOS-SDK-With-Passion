/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDAxis.h>

__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis

{
    _Bool mAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}

- (_Bool)isAutomatic;
- (_Bool)isDate;
- (void)setAutomatic:(_Bool)arg1;
- (id)initWithResources:(id)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (double)minorUnitValue;
- (double)majorUnitValue;
- (int)majorTimeUnit;
- (void)setMajorTimeUnit:(int)arg1;
- (int)minorTimeUnit;
- (void)setMinorTimeUnit:(int)arg1;
- (int)baseTimeUnit;
- (void)setBaseTimeUnit:(int)arg1;

@end
