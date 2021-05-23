/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject

{
    _Bool _didPickApplication;
    _Bool _isVisible;
    CDUnknownBlockType _presentationBlock;
    _Bool _redisplayAfterRotation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)destroyNativeObject;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)setupNativeObject;
- (_Bool)_isAffectedByWindowNotification:(id)arg1;
- (void)presentUsingBlock:(CDUnknownBlockType)arg1;

@end
