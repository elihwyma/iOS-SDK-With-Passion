/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Messages/Swift-Protocol.h>

@class MSConversation, UIViewController;

@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;

@protocol _MSMessageComposeExtensionImplProtocol <Swift>

@property (nonatomic, readonly) MSConversation *activeConversation;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic) unsigned long long presentationContext;
@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (weak, nonatomic, readonly) UIViewController *stickerViewController;
@property (retain, nonatomic) id <_MSMessageComposeExtensionImplProtocol> containingContext;
@property (retain, nonatomic) id <_MSMessageComposeHostImplProtocol> hostContext;

- (unsigned short)dismiss;
- (unsigned short)stageAssetArchive:skipShelf:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestPresentationStyleExpanded: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissAndPresentPhotosApp;
- (unsigned short)requestPresentationStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)_remoteViewDidBecomeReadyForDisplay;
- (unsigned short)requestResize;
- (unsigned short)contentDidLoad;
- (unsigned short)stageAppItem:skipShelf:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stageMediaItem:skipShelf:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stageRichLink:skipShelf:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAssetArchiveWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startDragMediaItem:frameInRemoteView:fence:completionHandler: /* Error: Ran out of types for this method. */;

@end
