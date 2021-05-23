/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell

{
    DOCTagColorPicker *_colorPickerView;
}

@property (retain, nonatomic) DOCTagColorPicker *colorPickerView;
@property (nonatomic, readonly) long long selectedColor;
@property (nonatomic, readonly) UIGestureRecognizer *changeColorPanGestureRecognizer;

- (id)initWithFrame:(struct CGRect)arg1;

@end
