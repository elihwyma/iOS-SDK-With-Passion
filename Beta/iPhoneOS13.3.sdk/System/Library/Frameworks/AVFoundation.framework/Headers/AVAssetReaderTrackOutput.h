/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput

{
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (nonatomic) _Bool appliesPreferredTrackTransform;
@property (nonatomic, readonly, getter=_isAttachedToAdaptor) _Bool attachedToAdaptor;
@property (nonatomic, readonly) AVAssetTrack *track;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_setAttachedAdaptor:(id)arg1;
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForAdaptor;
- (_Bool)_trimsSampleDurations;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_figAssetReaderExtractionOptions;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (id)_attachedAdaptor;

@end
