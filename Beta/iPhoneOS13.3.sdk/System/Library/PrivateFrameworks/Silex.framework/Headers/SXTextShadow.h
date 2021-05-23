/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXTextShadow : SXJSONObject

@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) struct CGPoint offset;
@property (nonatomic, readonly) UIColor *color;

- (id)TSDShadow;

@end
