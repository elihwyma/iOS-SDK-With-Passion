/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIColor, UIImage, UIImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView

{
    struct UIImage *_image;
    struct UIColor *_tintColor;
    struct UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *tintColor;

- (void)performSetup;

@end
