/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;

@protocol AVVideoCompositing;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput

{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property (nonatomic, readonly) NSArray *videoTracks;
@property (nonatomic, readonly) NSDictionary *videoSettings;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) id <AVVideoCompositing> customVideoCompositor;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (id)_errorForOSStatus:(int)arg1;
- (_Bool)_prepareForReadingReturningError:(id *)arg1;
- (_Bool)alwaysCopiesSampleData;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_formatDescriptions;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (void)_setVideoComposition:(id)arg1;
- (id)_videoCompositionProcessorColorProperties;

@end
