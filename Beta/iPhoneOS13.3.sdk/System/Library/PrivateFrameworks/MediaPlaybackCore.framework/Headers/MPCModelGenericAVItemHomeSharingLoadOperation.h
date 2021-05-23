/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation

{
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
