/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactHeaderViewSizeAttributes, CNContactPhotoView, NSArray, NSDictionary, NSLayoutConstraint, NSString, UILabel;

@protocol CNContactHeaderViewDelegate, CNPresenterDelegate;

@interface CNContactHeaderView : UIView <Swift>

{
    _Bool _needsReload;
    _Bool _needsLabelSizeCalculation;
    _Bool _shouldUseConstrainedMaxHeight;
    _Bool _alwaysShowsMonogram;
    _Bool _visibleToScrollViews;
    _Bool _showMonogramsOnly;
    _Bool _shouldShowBelowNavigationTitle;
    NSDictionary *_nameTextAttributes;
    id <CNPresenterDelegate> _presenterDelegate;
    id <CNContactHeaderViewDelegate> _delegate;
    UILabel *_nameLabel;
    NSArray *_activatedConstraints;
    NSArray *_contacts;
    NSLayoutConstraint *_photoTopConstraint;
    NSLayoutConstraint *_photoHeightConstraint;
    CNContactHeaderViewSizeAttributes *_sizeAttributes;
    double _lastViewWidth;
    double _constrainedMaxHeight;
    CNContactPhotoView *_photoView;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) NSArray *contacts;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (retain, nonatomic) CNContactHeaderViewSizeAttributes *sizeAttributes;
@property (nonatomic) _Bool needsLabelSizeCalculation;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) double constrainedMaxHeight;
@property (nonatomic) _Bool shouldUseConstrainedMaxHeight;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic) _Bool alwaysShowsMonogram;
@property (nonatomic) _Bool visibleToScrollViews;
@property (nonatomic) _Bool showMonogramsOnly;
@property (nonatomic) _Bool shouldShowBelowNavigationTitle;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (weak, nonatomic) id <CNPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id <CNContactHeaderViewDelegate> delegate;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic, readonly) double maxHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(_Bool)arg1;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3 monogramOnly:(_Bool)arg4;
+ (struct CGSize)defaultPhotoSize;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
- (_Bool)canBecomeFirstResponder;
- (id)descriptorForRequiredKeys;
- (void)updateWithContacts:(id)arg1;
- (void)updateFontSizes;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (id)contactViewCache;
- (void)photoViewDidUpdate:(id)arg1;
- (void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2;
- (id)viewControllerForPhotoView:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(_Bool)arg4 shouldAllowImageDrops:(_Bool)arg5 monogramOnly:(_Bool)arg6 delegate:(id)arg7;
- (id)contactStyle;
- (double)safeAreaTop;
- (double)safeAreaPhotoOffset;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (void)setConstrainedMaxHeight:(double)arg1 enabled:(_Bool)arg2;
- (void)updateWithNewContact:(id)arg1;
- (void)calculateLabelSizesIfNeeded;
- (void)setNeedsReload;
- (void)reloadDataIfNeeded;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForPhoto;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)arg1;
- (void)updateSizeDependentAttributes;

@end
