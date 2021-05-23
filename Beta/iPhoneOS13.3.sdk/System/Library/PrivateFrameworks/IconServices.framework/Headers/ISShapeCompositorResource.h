/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISColor, NSString;

__attribute__((visibility("hidden")))
@interface ISShapeCompositorResource : NSObject

{
    ISColor *_fillColor;
    ISColor *_lineColor;
    double _lineWidth;
}

@property (retain) ISColor *fillColor;
@property (retain) ISColor *lineColor;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)continuousRoundedRectShape;
+ (id)circleShape;
+ (double)continuousCornerRadiusForSize:(struct CGSize)arg1;

- (id)_init;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;

@end
