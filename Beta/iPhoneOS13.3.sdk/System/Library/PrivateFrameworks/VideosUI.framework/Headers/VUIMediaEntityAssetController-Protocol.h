/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class NSObject, VUIMediaEntityAssetControllerState, VUIMediaEntityType;

@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

@protocol VUIMediaEntityAssetController <Swift>

@property (copy, nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (copy, nonatomic, readonly) VUIMediaEntityType *mediaEntityType;
@property (weak, nonatomic) id <VUIMediaEntityAssetControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool supportsStartingDownload;
@property (copy, nonatomic, readonly) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;

- (unsigned short)invalidate;
- (unsigned short)resumeDownload;
- (unsigned short)cancelAndRemoveDownload;
- (unsigned short)startDownloadWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseDownload;

@end
