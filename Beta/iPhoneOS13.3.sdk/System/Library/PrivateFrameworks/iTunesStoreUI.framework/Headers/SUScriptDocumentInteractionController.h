/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptDocumentInteractionController : SUScriptObject

{
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_openWithFunction;
}

@property (retain) WebScriptObject *cancelFunction;
@property (retain) WebScriptObject *openWithFunction;
@property (copy) NSString *UTI;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (void)dismissMenuAnimated:(id)arg1;
- (id)scriptAttributeKeys;
- (id)_nativeObject;
- (id)_nativeDocumentInteractionController;
- (void)showOpenWithMenuFromDOMElement:(id)arg1;
- (void)showOpenWithMenuFromNavigationItem:(id)arg1;
- (id)_cancelFunction;
- (id)_openWithFunction;

@end
