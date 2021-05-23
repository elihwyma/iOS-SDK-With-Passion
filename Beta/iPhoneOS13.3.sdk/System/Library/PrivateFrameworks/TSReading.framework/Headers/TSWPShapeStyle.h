/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeStyle.h>

@class NSString;

@interface TSWPShapeStyle : TSDShapeStyle

@property (nonatomic, readonly) NSString *presetKind;

+ (id)properties;
+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)layoutProperties;

- (id)defaultParagraphStyle;
- (SEL)mapThemePropertyMapSelector;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (void)setDefaultParagraphStyle:(id)arg1;

@end
