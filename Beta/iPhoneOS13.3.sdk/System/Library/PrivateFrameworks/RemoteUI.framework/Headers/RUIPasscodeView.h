/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, PSPasscodeField, RUIElement, RUIHTMLHeaderElement, RUIHTMLHeaderView, RUIHeaderElement, RUIObjectModel, RUIPage, UIColor, UIScrollView, UITextField, UIView;

@protocol RUIHeader, RemoteUITableFooter;

@interface RUIPasscodeView

{
    UIScrollView *_containerView;
    UIView<RUIHeader> *_headerView;
    RUIHTMLHeaderView *_HTMLHeaderView;
    UITextField *_complexPasscodeField;
    RUIElement *_footer;
    UIView<RemoteUITableFooter> *_footerView;
    NSString *_pendingAutoFillToken;
    _Bool _appeared;
    unsigned long long _passcodeValidationAttempts;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    NSString *_headerTitle;
    PSPasscodeField *_passcodeField;
    UIColor *_foregroundColor;
    NSString *_submittedPIN;
    long long _keyboardAppearance;
    unsigned long long _numberOfEntryFields;
    RUIHeaderElement *_header;
    RUIHTMLHeaderElement *_HTMLHeader;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic, readonly) PSPasscodeField *passcodeField;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (copy, nonatomic) NSString *submittedPIN;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIHTMLHeaderElement *HTMLHeader;
@property (retain, nonatomic) RUIElement *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)view;
- (id)titleLabel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)headerView;
- (id)footerView;
- (id)sourceURL;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)_doneButtonTapped:(id)arg1;
- (id)passcodeView;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)viewDidLayout;
- (id)subElementWithID:(id)arg1;
- (void)autofillWithToken:(id)arg1;
- (_Bool)_requiresLocalPasscodeValidation;
- (void)_updateFieldSpacer;
- (void)_complexPasscodeFieldDidChange:(id)arg1;
- (id)HTMLHeaderView;
- (void)submitPIN;
- (void)_jiggleView:(id)arg1;
- (void)_clearPasscode;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (void)performAction:(int)arg1 forElement:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
