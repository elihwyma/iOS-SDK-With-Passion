/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject

{
    id _action;
    SUScriptCanvasContext *_canvas;
    _Bool _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) struct UIEdgeInsets imageEdgeInsets;
@property (nonatomic) _Bool shouldPerformDefaultAction;
@property (retain) id action;
@property (retain) SUScriptCanvasContext *canvas;
@property _Bool enabled;
@property _Bool loading;
@property (readonly) id showingConfirmation;
@property (retain) NSString *subtitle;
@property (retain) NSString *style;
@property long long tag;
@property (retain) NSString *title;
@property (retain) WebScriptObject *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)_action;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)buttonItem;
- (id)_initSUScriptButton;
- (id)initWithSystemItemString:(id)arg1;
- (id)_boxedNativeButton;
- (id)nativeButtonOfType:(int)arg1;
- (id)_nativeButton;
- (void)hideConfirmationAnimated:(_Bool)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)setImageWithURLString:(id)arg1 scale:(id)arg2;
- (void)performActionWithArguments:(id)arg1;
- (void)setNativeButton:(id)arg1;
- (id)_systemItemString;

@end
