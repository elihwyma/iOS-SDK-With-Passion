/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class SXUnitConverter, UIColor;

@interface SXDataTableBorder : SXJSONObject

{
    double _width;
    SXUnitConverter *unitConverter;
}

@property (nonatomic, readonly) struct _SXConvertibleValue actualWidth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) UIColor *color;
@property (retain, nonatomic) SXUnitConverter *unitConverter;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

@end
