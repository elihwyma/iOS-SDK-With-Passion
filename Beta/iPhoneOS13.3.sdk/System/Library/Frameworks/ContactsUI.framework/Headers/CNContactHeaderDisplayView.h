/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactHeaderView.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactDowntimeView, CNContactFormatter, CNContactGeminiView, CNGeminiPickerController, CNGeminiResult, NSDictionary, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CNContactHeaderDisplayView : CNContactHeaderView <Swift>

{
    NSDictionary *_taglineTextAttributes;
    NSDictionary *_downtimeTextAttributes;
    NSDictionary *_geminiTextAttributes;
    _Bool _shouldShowGemini;
    _Bool _isEmergencyContact;
    _Bool _allowsPickerActions;
    CNContactFormatter *_contactFormatter;
    NSDictionary *_importantTextAttributes;
    NSString *_alternateName;
    NSString *_message;
    NSString *_importantMessage;
    UIView *_personHeaderView;
    UILabel *_taglineLabel;
    UILabel *_importantLabel;
    CNContactDowntimeView *_downtimeView;
    double _minLabelsHeight;
    double _maxLabelsHeight;
    NSLayoutConstraint *_avatarNameSpacingConstraint;
    CNContactGeminiView *_geminiView;
    CNGeminiResult *_geminiResult;
    CNGeminiPickerController *_geminiPicker;
}

@property (retain, nonatomic) UIView *personHeaderView;
@property (retain) UILabel *taglineLabel;
@property (retain, nonatomic) UILabel *importantLabel;
@property (retain, nonatomic) CNContactDowntimeView *downtimeView;
@property (nonatomic) double minLabelsHeight;
@property (nonatomic) double maxLabelsHeight;
@property (retain) NSLayoutConstraint *avatarNameSpacingConstraint;
@property (retain) CNContactGeminiView *geminiView;
@property (retain) CNGeminiResult *geminiResult;
@property (retain, nonatomic) CNGeminiPickerController *geminiPicker;
@property (nonatomic) _Bool shouldShowGemini;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (copy, nonatomic) NSDictionary *taglineTextAttributes;
@property (copy, nonatomic) NSDictionary *importantTextAttributes;
@property (retain, nonatomic) NSString *alternateName;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *importantMessage;
@property (nonatomic) unsigned long long avatarStyle;
@property (nonatomic) _Bool isEmergencyContact;
@property (nonatomic) _Bool allowsPickerActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3 monogramOnly:(_Bool)arg4;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1;
+ (id)contactHeaderViewWithContact:(id)arg1 monogramOnly:(_Bool)arg2 delegate:(id)arg3;
+ (id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(_Bool)arg2 monogramOnly:(_Bool)arg3 delegate:(id)arg4;

- (double)minHeight;
- (double)maxHeight;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)descriptorForRequiredKeys;
- (void)updateFontSizes;
- (void)setNameTextAttributes:(id)arg1;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (void)handleNameLabelLongPress:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (void)reloadDataPreservingChanges:(_Bool)arg1;
- (double)defaultMaxHeight;
- (void)calculateLabelSizesIfNeeded;
- (void)updateSizeDependentAttributes;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(_Bool)arg4 monogramOnly:(_Bool)arg5 delegate:(id)arg6;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 monogramOnly:(_Bool)arg3 delegate:(id)arg4;
- (void)createGeminiViewIfNeeded;
- (void)disablePhotoTapGesture;
- (void)calculateLabelSizes;
- (void)setDowntimeTextAttributes:(id)arg1;
- (id)downtimeTextAttributes;
- (void)setGeminiTextAttributes:(id)arg1;
- (id)geminiTextAttributes;
- (void)_updatePhotoView;
- (void)_updateImportantLabel;
- (void)_updateDowntimeView;
- (void)updateGeminiResult:(id)arg1;
- (id)_importantString;
- (void)handleGeminiViewTouch:(id)arg1;

@end
