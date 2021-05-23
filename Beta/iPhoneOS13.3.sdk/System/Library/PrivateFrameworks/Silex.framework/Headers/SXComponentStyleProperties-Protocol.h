/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXBorder, SXComponentMask, SXComponentShadow, SXDataTableStyle, SXFill, UIColor;

@protocol SXComponentStyleProperties <Swift>

@property (nonatomic, readonly) SXFill *fill;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXComponentShadow *shadow;
@property (nonatomic, readonly) SXBorder *border;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) SXDataTableStyle *tableStyle;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) SXComponentMask *mask;

@end
