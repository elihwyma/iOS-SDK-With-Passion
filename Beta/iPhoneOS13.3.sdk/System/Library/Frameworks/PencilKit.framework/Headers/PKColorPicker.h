/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@class UIColor, _PKColorPickerView;

@protocol PKColorPickerDelegate;

@interface PKColorPicker : UIViewController

{
    id <PKColorPickerDelegate> _delegate;
    _PKColorPickerView *_colorPickerView;
}

@property (retain, nonatomic) _PKColorPickerView *colorPickerView;
@property (weak, nonatomic) id <PKColorPickerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) long long colorUserInterfaceStyle;

+ (id)_representableColorForColor:(id)arg1;

- (id)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (id)_colorPickerView;
- (void)_setSelectedColorForPoint:(struct CGPoint)arg1;
- (void)_colorPickerViewUserDidTouchUpInside:(id)arg1;
- (void)_colorPickerViewDidChangeSelectedColor:(id)arg1;
- (void)_setInitialColorForSpringLoading:(id)arg1;

@end
