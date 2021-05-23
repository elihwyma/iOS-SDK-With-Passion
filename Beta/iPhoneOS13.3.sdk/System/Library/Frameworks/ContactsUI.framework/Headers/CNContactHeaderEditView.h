/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactHeaderView.h>

@class NSLayoutConstraint, UIButton;

@interface CNContactHeaderEditView : CNContactHeaderView

{
    _Bool _allowsEditPhoto;
    UIButton *_editButton;
    NSLayoutConstraint *_editButtonHeightConstraint;
    struct CGSize _maxButtonSize;
}

@property (nonatomic) struct CGSize maxButtonSize;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) NSLayoutConstraint *editButtonHeightConstraint;
@property (nonatomic) _Bool allowsEditPhoto;

+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3 monogramOnly:(_Bool)arg4;
+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 monogramOnly:(_Bool)arg3 delegate:(id)arg4;
+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 showingNavBar:(_Bool)arg3 monogramOnly:(_Bool)arg4 delegate:(id)arg5;

- (double)maxHeight;
- (void)updateConstraints;
- (_Bool)hasPhoto;
- (void)updateWithContacts:(id)arg1;
- (void)updateFontSizes;
- (double)defaultMaxHeight;
- (void)calculateLabelSizesIfNeeded;
- (void)updateSizeDependentAttributes;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 monogramOnly:(_Bool)arg4 delegate:(id)arg5;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 delegate:(id)arg4 showingNavBar:(_Bool)arg5 monogramOnly:(_Bool)arg6;
- (void)setAllowsEditPhoto:(_Bool)arg1 preservingChanges:(_Bool)arg2;
- (void)updateEditButtonTitle;
- (_Bool)photoIsModified;
- (void)saveContactPhoto;
- (void)editButtonPressed;
- (void)updateContactWithEditedPropertyItem:(id)arg1;

@end
