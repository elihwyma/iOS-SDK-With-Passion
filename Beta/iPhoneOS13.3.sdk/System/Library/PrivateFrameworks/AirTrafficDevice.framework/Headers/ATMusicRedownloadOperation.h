/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMediaAssetDownloadRequest, ICMediaRedownloadRequest;

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation

{
    ICMediaRedownloadRequest *_redownloadRequest;
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}

- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)_musicAppBundleID;
- (void)_getICStoreMediaResponseItemWithRequestContext:(id)arg1 playBackEndPointType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
