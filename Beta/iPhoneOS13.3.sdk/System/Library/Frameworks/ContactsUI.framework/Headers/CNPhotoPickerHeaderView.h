/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNContactPhotoView, NSArray, UIButton;

@protocol CNPhotoPickerHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerHeaderView : UIView

{
    _Bool _allowsEditing;
    CNContactPhotoView *_photoView;
    id <CNPhotoPickerHeaderViewDelegate> _delegate;
    UIView *_headerDropShadowView;
    NSArray *_subviewsConstraints;
    UIButton *_editButton;
}

@property (retain, nonatomic) CNContactPhotoView *photoView;
@property (retain, nonatomic) UIView *headerDropShadowView;
@property (retain, nonatomic) NSArray *subviewsConstraints;
@property (retain, nonatomic) UIButton *editButton;
@property (weak, nonatomic) id <CNPhotoPickerHeaderViewDelegate> delegate;
@property (nonatomic) _Bool allowsEditing;

- (void)updateConstraints;
- (void)didMoveToWindow;
- (id)initWithContact:(id)arg1;
- (void)updatePhoto;
- (void)photoViewTapped;

@end
