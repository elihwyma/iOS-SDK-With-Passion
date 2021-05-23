/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@interface ETPaletteCircleView : UIView

{
    UIView *_selectionMarker;
    _Bool _selected;
}

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, readonly) UIView *selectionMarker;

+ (double)paletteCircleDiameter;
+ (double)selectionMarkerDiameter;
+ (id)selectionMarkerColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateSelectionMarkerFrame;

@end
