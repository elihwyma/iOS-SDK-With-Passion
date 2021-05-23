/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSSStyle.h>

@interface TSDShapeStyle : TSSStyle

+ (void)initialize;
+ (id)properties;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (_Bool)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)p_magicMoveProperties;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (_Bool)wantsHighContrastBackgroundColor;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg1;

@end
