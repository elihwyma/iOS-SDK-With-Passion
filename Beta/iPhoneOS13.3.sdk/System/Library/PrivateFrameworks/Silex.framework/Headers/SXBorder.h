/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (nonatomic, readonly) SXStrokeStyle *all;
@property (nonatomic, readonly) SXStrokeStyle *top;
@property (nonatomic, readonly) SXStrokeStyle *bottom;
@property (nonatomic, readonly) SXStrokeStyle *left;
@property (nonatomic, readonly) SXStrokeStyle *right;

- (id)defaultStrokeStyle;
- (_Bool)shouldBeDotted;
- (_Bool)isSolid;

@end
