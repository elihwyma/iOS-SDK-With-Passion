/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface NotesTextureView : UIView

{
    UIImage *_image;
    struct CGSize _phase;
}

@property (retain, nonatomic) UIImage *image;
@property struct CGSize phase;

@end
