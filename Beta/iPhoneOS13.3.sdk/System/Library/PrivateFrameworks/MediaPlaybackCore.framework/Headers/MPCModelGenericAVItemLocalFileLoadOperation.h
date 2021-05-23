/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

{
    _Bool _requirePreferredAssetQuality;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) _Bool requirePreferredAssetQuality;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
