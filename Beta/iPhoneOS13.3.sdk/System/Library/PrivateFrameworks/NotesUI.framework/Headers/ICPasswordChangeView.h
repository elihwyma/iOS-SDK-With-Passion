/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICPasswordChangeViewController;

@interface ICPasswordChangeView : UIView

{
    ICPasswordChangeViewController *_parentViewController;
}

@property (weak, nonatomic) ICPasswordChangeViewController *parentViewController;

- (void)layoutSubviews;
- (void)updateConstraints;

@end
