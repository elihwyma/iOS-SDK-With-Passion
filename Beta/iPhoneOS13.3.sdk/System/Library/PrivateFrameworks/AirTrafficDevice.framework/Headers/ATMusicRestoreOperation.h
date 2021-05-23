/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMediaAssetDownloadRequest, ICMusicRestoreRequest;

@interface ATMusicRestoreOperation : ATStoreDownloadOperation

{
    ICMusicRestoreRequest *_restoreRequest;
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}

- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)_downloadRestoreAssetWithRequestContext:(id)arg1 restoreResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
