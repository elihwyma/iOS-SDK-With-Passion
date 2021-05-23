/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PXMediaTypeInfoManager : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_pendingCompletionHandlers;
}

+ (id)sharedManager;
+ (id)knowledgeBaseFallbackURL;

- (id)init;
- (id)_init;
- (void)_processPendingCallbacksWithAsset:(id)arg1;
- (void)_handleAssetDownloadProgressWithAsset:(id)arg1 error:(id)arg2;
- (void)_handleAssetQueryCallbackWithAsset:(id)arg1 error:(id)arg2 userInitiated:(_Bool)arg3;
- (void)_installMobileAssetAsUserInitiated:(_Bool)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_prepareInformationForLookups;
- (void)prepareInformationForLookups;
- (void)_handleInstallMobileAssetCallbackWithAsset:(id)arg1 UTI:(id)arg2 codecName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)mediaTypeInfoURLForUTI:(id)arg1 codecName:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
