/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIViewController.h>

@class UIImage, UIImageView;

@interface _SBAlertItemHeaderViewController : UIViewController

{
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImage *image;

- (id)initWithImage:(id)arg1;
- (void)loadView;
- (struct CGSize)_expectedSize;
- (double)_topMarginOffset;
- (double)_bottomMarginOffset;

@end
