/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPColumns : NSObject

{
    unsigned long long _columnCount;
    _Bool _equalWidth;
    double _widthArray[10];
    double _gapArray[9];
}

@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) _Bool equalWidth;

+ (id)columns;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (id)initWithColumnCount:(unsigned long long)arg1;
- (void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(_Bool)arg2 widthArray:(double *)arg3 gapArray:(double *)arg4;
- (void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2;
- (double)p_equalGapForEqualWidth:(double)arg1;
- (double)p_maxEqualGapForBodyWidth:(double)arg1;
- (double)p_equalWidthForEqualGap:(double)arg1;
- (id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;
- (void)setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;
- (void)setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;

@end
