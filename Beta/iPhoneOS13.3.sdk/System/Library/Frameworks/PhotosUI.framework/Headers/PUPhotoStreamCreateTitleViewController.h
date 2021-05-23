/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UILabel, UINavigationItem, UITextField, UITextView;

@protocol PUPhotoStreamCreateTitleDelegate;

@interface PUPhotoStreamCreateTitleViewController : UIViewController

{
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    NSArray *_constraints;
    _Bool _hidePlaceholder;
    UILabel *_axPlaceholderLabel;
    NSLayoutConstraint *_standardHeightConstraint;
    NSLayoutConstraint *_axHeightConstraint;
    id <PUPhotoStreamCreateTitleDelegate> _titleDelegate;
}

@property (nonatomic) id <PUPhotoStreamCreateTitleDelegate> titleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setTitle:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)navigationItem;
- (struct CGSize)contentSizeForViewInPopover;
- (void)textViewDidChange:(id)arg1;
- (void)contentSizeChanged;
- (void)_addConstraintsForTraitCollection:(id)arg1;
- (void)_cancelPost:(id)arg1;

@end
