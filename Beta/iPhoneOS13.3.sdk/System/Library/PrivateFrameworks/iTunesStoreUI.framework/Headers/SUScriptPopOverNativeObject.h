/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class SUDOMElement, UIBarButtonItem;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject

{
    _Bool _redisplayAfterRotation;
    UIBarButtonItem *_sourceButtonItem;
    SUDOMElement *_sourceDOMElement;
}

@property (retain, nonatomic) UIBarButtonItem *sourceButtonItem;
@property (retain, nonatomic) SUDOMElement *sourceDOMElement;

- (void)dealloc;
- (void)destroyNativeObject;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)setupNativeObject;
- (_Bool)_isAffectedByWindowNotification:(id)arg1;

@end
