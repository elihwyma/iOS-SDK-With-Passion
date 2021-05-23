/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContact, NSArray, NSLayoutYAxisAnchor, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNStarkNameViewController : UIViewController

{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIStackView *_stackView;
    NSArray *_layoutConstraints;
    CNContact *_contact;
}

@property (nonatomic, readonly) UILabel *primaryLabel;
@property (nonatomic, readonly) UILabel *secondaryLabel;
@property (nonatomic, readonly) UIStackView *stackView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (id)initWithContact:(id)arg1;
- (void)setupViews;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)updateViews;

@end
