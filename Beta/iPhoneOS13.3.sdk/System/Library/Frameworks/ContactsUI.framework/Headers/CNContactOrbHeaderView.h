/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNContactFormatter, CNContactPhotoView, NSArray, NSDictionary, NSMutableArray, NSString, UILabel;

@interface CNContactOrbHeaderView : UIView

{
    _Bool _centersPhotoAndLabels;
    _Bool _alwaysShowsMonogram;
    CNContactFormatter *_contactFormatter;
    NSString *_alternateName;
    NSString *_message;
    CNContactPhotoView *_photoView;
    NSArray *_contacts;
    NSMutableArray *_headerConstraints;
    NSDictionary *_nameTextAttributes;
    NSDictionary *_taglineTextAttributes;
    UILabel *_nameLabel;
    UILabel *_taglineLabel;
    UILabel *_fakeTaglineAlignmentLabel;
    UIView *_markerView;
    struct UIEdgeInsets _contentMargins;
}

@property (retain, nonatomic) NSMutableArray *headerConstraints;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *taglineLabel;
@property (retain, nonatomic) UILabel *fakeTaglineAlignmentLabel;
@property (retain, nonatomic) UIView *markerView;
@property (nonatomic) struct UIEdgeInsets contentMargins;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSString *alternateName;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) _Bool centersPhotoAndLabels;
@property (nonatomic, readonly) double photoLabelSpacing;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic) _Bool alwaysShowsMonogram;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(_Bool)arg1;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(_Bool)arg2;

- (void)dealloc;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)reloadData;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3;
- (void)updateWithContacts:(id)arg1;
- (void)updateFontSizes;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (void)menuWillHide:(id)arg1;

@end
