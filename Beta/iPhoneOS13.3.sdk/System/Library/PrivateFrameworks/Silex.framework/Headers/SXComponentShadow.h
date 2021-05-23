/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class SXConvertiblePoint, UIColor;

@interface SXComponentShadow : SXJSONObject

@property (nonatomic, readonly) struct _SXConvertibleValue radius;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) SXConvertiblePoint *offset;
@property (nonatomic, readonly) UIColor *color;

@end
