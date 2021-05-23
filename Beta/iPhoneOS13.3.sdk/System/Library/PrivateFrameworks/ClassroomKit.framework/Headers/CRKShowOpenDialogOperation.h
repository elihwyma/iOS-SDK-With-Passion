/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKAirDropTransferInfo, NSData, NSSet, NSString, NSURL, SFAirDropClassroomTransferManager;

@interface CRKShowOpenDialogOperation : CATOperation

{
    NSSet *mURLs;
    _Bool mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    _Bool mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    NSSet *mAirDropItems;
    NSString *mTransferIdentifier;
    CRKAirDropTransferInfo *mTransferInfo;
    _Bool mTransferAccepted;
    _Bool mTransferFinished;
    NSURL *mTransferDirectoryURL;
    SFAirDropClassroomTransferManager *mTransferManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fakeBundleID;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5 sourceBundleIdentifier:(id)arg6;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5 sourceBundleIdentifier:(id)arg6 filesDescription:(id)arg7;
- (void)startTransfer;
- (void)transferDidStartWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidProgressWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)transferDidFinishWithSuccess:(_Bool)arg1 destinationPath:(id)arg2 error:(id)arg3;
- (void)succeedIfNeeded;
- (void)cleanupHiddenTransferItemsIfNeeded;
- (id)initWithFileURLs:(id)arg1 keepOriginalFiles:(_Bool)arg2 previewImageData:(id)arg3 senderName:(id)arg4 autoAccept:(_Bool)arg5;

@end
