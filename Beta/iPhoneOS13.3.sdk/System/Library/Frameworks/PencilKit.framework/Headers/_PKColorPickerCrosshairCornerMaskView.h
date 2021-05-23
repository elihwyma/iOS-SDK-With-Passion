/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@interface _PKColorPickerCrosshairCornerMaskView : UIView

{
    _Bool _excludeCorner;
    unsigned long long _cornerPosition;
}

@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic) _Bool excludeCorner;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_shapeLayer;
- (id)maskPath;
- (void)_setPath:(id)arg1;
- (void)_setFillColor:(id)arg1;

@end
