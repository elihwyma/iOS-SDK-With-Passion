/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class MSConversation, NSString, UIViewController;

@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@interface _MSMessageAppBundleContext : NSObject

{
    _Bool _wantsLiveView;
    id <_MSMessageComposeExtensionImplProtocol> _containingContext;
    UIViewController *_viewController;
    MSConversation *_activeConversation;
    unsigned long long _presentationStyle;
    unsigned long long _presentationContext;
    id <_MSMessageComposeHostImplProtocol> _hostContext;
}

@property (retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MSConversation *activeConversation;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic) unsigned long long presentationContext;
@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (weak, nonatomic, readonly) UIViewController *stickerViewController;
@property (retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext;

- (void)dismiss;
- (void)_resignActive;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismissAndPresentPhotosApp;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)requestResize;
- (void)contentDidLoad;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (void)_prepareForPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_volumeButtonPressed:(_Bool)arg1;
- (void)stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_requestSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hostDidBeginDeferredTeardown;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)initialFrameOfHostView;
- (id)initWithViewController:(id)arg1 wantsLiveView:(_Bool)arg2;
- (void)_sendWillBecomeActiveMessage;

@end
