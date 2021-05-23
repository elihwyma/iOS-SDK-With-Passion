/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer;

@interface NTKRichComplicationHandView : UIView

{
    CALayer *_dotLayer;
    CALayer *_handLayer;
    double _beginAngle;
    double _endAngle;
    double _handWidth;
    float _value;
}

@property (nonatomic, readonly) CALayer *dotLayer;
@property (nonatomic, readonly) CALayer *handLayer;

- (void)layoutSubviews;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)_updateHandTransform;
- (id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4;

@end
