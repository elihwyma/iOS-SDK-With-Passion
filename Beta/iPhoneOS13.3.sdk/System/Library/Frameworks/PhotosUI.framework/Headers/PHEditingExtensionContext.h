/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSUndoManager, PUEditingExtensionUndoAdapter, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext

{
    long long _fullSizeImageExtensionHandle;
    long long _videoPathExtensionHandle;
    _Bool _attemptUndoManagerAutoSetup;
    PUEditingInitialPayload *__initialPayload;
    PUEditingExtensionUndoAdapter *_undoAdapter;
    NSUndoManager *_undoManagerForBarButtons;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;
@property (retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter;
@property (nonatomic) _Bool attemptUndoManagerAutoSetup;
@property (retain, nonatomic) NSUndoManager *undoManagerForBarButtons;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(_Bool)arg2;
- (void)beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishContentEditing;
- (void)cancelContentEditingWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)querySDKVersionWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)_contentEditingController;
- (void)_releaseSandboxExtensions;

@end
