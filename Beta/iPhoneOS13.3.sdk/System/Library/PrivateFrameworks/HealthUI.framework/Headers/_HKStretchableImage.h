/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface _HKStretchableImage : NSObject

{
    UIImage *_topImage;
    UIImage *_centerImage;
    UIImage *_bottomImage;
    UIImage *_singlePointImage;
}

@property (retain, nonatomic) UIImage *topImage;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIImage *bottomImage;
@property (retain, nonatomic) UIImage *singlePointImage;

- (double)_desiredWidth;
- (void)_renderSingleImageInContext:(struct CGContext *)arg1 point:(struct CGPoint)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;
- (void)_renderStretchedInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2 contextBounds:(struct CGRect)arg3 alpha:(double)arg4;
- (void)renderInContext:(struct CGContext *)arg1 topCenter:(struct CGPoint)arg2 bottomCenter:(struct CGPoint)arg3 contextBounds:(struct CGRect)arg4 alpha:(double)arg5;

@end
