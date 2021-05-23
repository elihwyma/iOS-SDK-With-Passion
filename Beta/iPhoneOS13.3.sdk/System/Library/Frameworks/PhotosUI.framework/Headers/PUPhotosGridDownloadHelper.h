/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PUPhotosGridViewController;

@protocol OS_dispatch_queue;

@interface PUPhotosGridDownloadHelper : NSObject

{
    NSMutableDictionary *_downloadContexts;
    NSObject<OS_dispatch_queue> *_downloadContextsIsolationQueue;
    _Bool _shouldTreatLivePhotosAsStills;
    PUPhotosGridViewController *_gridViewController;
    long long _mode;
}

@property (weak, nonatomic, readonly) PUPhotosGridViewController *gridViewController;
@property (nonatomic) _Bool shouldTreatLivePhotosAsStills;
@property (nonatomic) long long mode;

+ (id)createAlertControllerForDownloadErrorWithAsset:(id)arg1;

- (id)init;
- (id)_defaultOptions;
- (id)initWithGridViewController:(id)arg1;
- (void)handleDownloadOfAssetIfNeeded:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3;
- (void)checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isAnyPickerAssetDownloading:(id)arg1;
- (void)_cancelPreviousDownloadsForAsset:(id)arg1;
- (void)_checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDownloadForIdentifier:(id)arg1;
- (void)cancelAllDownloads;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 options:(id)arg2 inCollection:(id)arg3;
- (void)_updateDownloadProgressForAsset:(id)arg1;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 canceled:(_Bool)arg3 error:(id)arg4;
- (void)_setDownloadContext:(id)arg1 forIdentifier:(id)arg2;
- (id)_downloadContextForIdentifier:(id)arg1;
- (void)_removeDownloadRequestForIdentifier:(id)arg1;

@end
