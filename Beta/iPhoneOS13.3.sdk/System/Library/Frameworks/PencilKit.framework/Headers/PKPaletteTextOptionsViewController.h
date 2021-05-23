/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController

{
    id <PKPaletteTextOptionsViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <PKPaletteTextOptionsViewControllerDelegate> delegate;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)_textButtonTouchUpInsideHandler:(id)arg1;
- (void)_signatureButtonTouchUpInsideHandler:(id)arg1;

@end
