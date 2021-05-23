/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext

{
    id <_MSMessageComposeHostProtocol> _delegate;
}

@property (weak, nonatomic) id <_MSMessageComposeHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_dismiss;
- (void)_stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_dismissAndPresentPhotosApp;
- (void)_stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestResize;
- (void)_contentDidLoad;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
