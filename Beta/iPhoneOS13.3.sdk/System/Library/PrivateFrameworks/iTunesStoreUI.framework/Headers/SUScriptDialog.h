/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString;

@interface SUScriptDialog : SUScriptObject

{
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id _textFields;
    NSString *_title;
}

@property (retain) NSString *body;
@property (retain) id buttons;
@property (retain) NSNumber *cancelButtonIndex;
@property (retain) NSNumber *destructiveButtonIndex;
@property (retain) id textFields;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)show;
- (void)dismiss;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_nativeDialog;
- (void)_logSheetWarnings;
- (void)showSheet;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheetInPopOver:(id)arg1;

@end
