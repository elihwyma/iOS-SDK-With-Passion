/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput

{
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (nonatomic, readonly) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (id)initWithTrack:(id)arg1;
- (_Bool)_trimsSampleDurations;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;

@end
