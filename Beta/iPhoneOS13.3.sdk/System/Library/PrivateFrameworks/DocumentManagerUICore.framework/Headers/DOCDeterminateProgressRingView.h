/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class CALayer;

@interface DOCDeterminateProgressRingView : UIView

{
    CALayer *_squareLayer;
    _Bool _canShowStopButton;
    double _progress;
}

@property (nonatomic) double progress;
@property (nonatomic) _Bool canShowStopButton;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;

@end
