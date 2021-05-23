/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDPie2DType : CHDChartType

{
    int mFirstSliceAngle;
    _Bool mDoughnutType;
    _Bool mPieOfPieType;
    _Bool mBarOfPieType;
}

- (id)contentFormat;
- (_Bool)isDoughnutType;
- (id)initWithChart:(id)arg1;
- (void)setFirstSliceAngle:(int)arg1;
- (void)setDoughnutType:(_Bool)arg1;
- (void)setPieOfPieType:(_Bool)arg1;
- (void)setBarOfPieType:(_Bool)arg1;
- (int)defaultLabelPosition;
- (int)firstSliceAngle;
- (_Bool)isPieOfPieType;
- (_Bool)isBarOfPieType;
- (_Bool)hasExplosion;

@end
