/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterHelper.h>

__attribute__((visibility("hidden")))
@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper

{
    short _alternateGroupID;
}

- (void)setDelegate:(id)arg1;
- (long long)status;
- (void)setMetadata:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)startWriting;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setSinglePassFileSize:(long long)arg1;
- (void)setSinglePassMediaDataSize:(long long)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)arg1;
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;

@end
