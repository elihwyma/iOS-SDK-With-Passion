/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMovieTrack.h>

@class AVMediaDataStorage, AVMutableMovieTrackInternal, NSArray, NSURL;

@interface AVMutableMovieTrack : AVMovieTrack

{
    AVMutableMovieTrackInternal *_mutableMovieTrackInternal;
}

@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) AVMediaDataStorage *mediaDataStorage;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long alternateGroupID;
@property (nonatomic, getter=isModified) _Bool modified;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic) int timescale;

+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)trackWithTrackID:(int)arg1 forMovie:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)locale;
- (id)languageCode;
- (int)trackID;
- (long long)layer;
- (void)setLayer:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)extendedLanguageTag;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)setExtendedLanguageTag:(id)arg1;
- (float)preferredVolume;
- (id)availableMetadataFormats;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (void)setNaturalSize:(struct CGSize)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription *)arg1 withFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (CDStruct_1b6d18a9)preferredMediaChunkDuration;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (long long)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (long long)preferredMediaChunkSize;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (id)initWithTrackID:(int)arg1 forMovie:(id)arg2;
- (struct OpaqueFigMutableMovie *)_figMutableMovie;
- (void)_addFigAssetTrackNotifications;
- (void)_removeFigAssetTrackNotifications;
- (id)_stringForProperty:(struct __CFString *)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg1;
- (void)_setString:(id)arg1 forProperty:(struct __CFString *)arg2;
- (void)_setSize:(struct CGSize)arg1 forProperty:(struct __CFString *)arg2;
- (void)_signalMetadataUpdated;
- (struct CGSize)cleanApertureDimensions;
- (struct CGSize)productionApertureDimensions;
- (struct CGSize)encodedPixelsDimensions;
- (void)setCleanApertureDimensions:(struct CGSize)arg1;
- (void)setProductionApertureDimensions:(struct CGSize)arg1;
- (void)setEncodedPixelsDimensions:(struct CGSize)arg1;
- (_Bool)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 copySampleData:(_Bool)arg4 error:(id *)arg5;
- (_Bool)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 decodeTime:(CDStruct_1b6d18a9 *)arg2 presentationTime:(CDStruct_1b6d18a9 *)arg3 error:(id *)arg4;
- (_Bool)insertMediaTimeRange:(CDStruct_e83c9415)arg1 intoTimeRange:(CDStruct_e83c9415)arg2;
- (_Bool)appendMediaData:(id)arg1 dataOffset:(long long *)arg2;

@end
