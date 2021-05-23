/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PKColorPicker, UIColor;

@protocol MFComposeColorPickerControllerDelegate;

@interface MFComposeColorPickerController : UIViewController

{
    _Bool _shouldShowTitleBar;
    id <MFComposeColorPickerControllerDelegate> _delegate;
    UIColor *_selectedColor;
    PKColorPicker *_colorPicker;
}

@property (retain, nonatomic) PKColorPicker *colorPicker;
@property (nonatomic) _Bool shouldShowTitleBar;
@property (weak, nonatomic) id <MFComposeColorPickerControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (void)closeColorPicker:(id)arg1;
- (id)initWithSelectedColor:(id)arg1 shouldShowTitleBar:(_Bool)arg2;

@end
