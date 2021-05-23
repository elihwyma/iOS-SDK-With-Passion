/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject

{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_sendScriptDidChange;

@end
