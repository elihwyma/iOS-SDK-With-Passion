/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXMediaProvider;

@protocol PXDisplayAsset, PXDisplayAssetVideoContentProviderRequestDelegate;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject

{
    long long _requestID;
    id <PXDisplayAsset> _asset;
    PXMediaProvider *_mediaProvider;
    long long _priority;
    double _loadingProgress;
    id <PXDisplayAssetVideoContentProviderRequestDelegate> _delegate;
}

@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) double loadingProgress;
@property (weak, nonatomic) id <PXDisplayAssetVideoContentProviderRequestDelegate> delegate;

+ (id)requestWithAsset:(id)arg1 mediaProvider:(id)arg2 priority:(long long)arg3 delegate:(id)arg4;

- (void)dealloc;
- (void)cancel;
- (void)_start;
- (long long)_streamingVideoIntent;
- (void)_handleLoadingProgress:(double)arg1;
- (void)_handleMediaProviderResult:(id)arg1 info:(id)arg2;

@end
