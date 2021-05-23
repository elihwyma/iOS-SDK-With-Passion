/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class DOMHTMLSelectElement, NSArray, NSString, UITextInputPasswordRules, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <Swift>

{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    NSArray *_groupsAndOptions;
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    _Bool _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    UIWebSelectPopover *_popover;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) NSArray *_groupsAndOptions;
@property (retain, nonatomic) NSArray *_cachedItems;
@property (nonatomic) UIWebSelectPopover *_popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;

- (void)dealloc;
- (_Bool)_isEmpty;
- (void)viewWillAppear:(_Bool)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_setupGroupsAndOptions;
- (id)_optionsForSection:(long long)arg1;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(_Bool)arg4;

@end
