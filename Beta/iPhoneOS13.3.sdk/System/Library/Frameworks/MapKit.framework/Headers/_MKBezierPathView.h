/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKBezierPathView : UIView

{
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (Class)layerClass;
+ (id)_pathForBalloonRadius:(double)arg1 tailLength:(double)arg2;

- (void)setPath:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;
- (id)initWithOvalInSize:(struct CGSize)arg1;

@end
