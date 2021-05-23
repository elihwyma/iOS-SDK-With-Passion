/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject

{
    _Bool _isVisible;
    NSString *_subtitle;
    NSString *_title;
}

@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_menuDidHideNotification:(id)arg1;
- (void)_reloadUntructedString;
- (void)_setupCalloutBar;
- (void)_resetCalloutBar;
- (void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;

@end
