/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptTextField : SUScriptObject

{
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (retain) NSString *autocapitalizationType;
@property (retain) NSString *autocorrectionType;
@property (retain) NSString *keyboardType;
@property (retain) NSString *placeholder;
@property (retain) WebScriptObject *shouldFocusFunction;
@property (readonly) NSString *style;
@property (retain) NSString *value;
@property (retain) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_keyboardType;
- (id)_className;
- (double)_defaultWidth;
- (_Bool)blur;
- (_Bool)focus;
- (id)attributeKeys;
- (id)_autocorrectionType;
- (id)_autocapitalizationType;
- (id)scriptAttributeKeys;
- (id)buttonItem;
- (id)initWithTextFieldStyle:(id)arg1;
- (_Bool)_styleIsValid:(id)arg1;
- (id)_boxedNativeTextField;
- (id)_copyPlaceholder;
- (id)_copyValue;
- (id)_newTextField;
- (void)setNativeObjectWithBarButtonItem:(id)arg1;
- (void)setNativeObjectWithSearchBar:(id)arg1;
- (void)setNativeObjectWithTextField:(id)arg1;

@end
