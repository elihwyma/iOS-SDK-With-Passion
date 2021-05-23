/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMovie.h>

@class AVMediaDataStorage, AVMutableMovieInternal, NSArray;

@interface AVMutableMovie : AVMovie

{
    AVMutableMovieInternal *_mutableMovieInternal;
}

@property (nonatomic, getter=isModified) _Bool modified;
@property (copy, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic) CDStruct_1b6d18a9 interleavingPeriod;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) float preferredRate;
@property (nonatomic) float preferredVolume;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) int timescale;
@property (nonatomic, readonly) NSArray *tracks;

+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)movieWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)fileType;
- (id)URL;
- (CDStruct_1b6d18a9)duration;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)tracksWithMediaType:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (id)trackWithTrackID:(int)arg1;
- (id)availableMetadataFormats;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)_initializationOptions;
- (id)_mutableTracks;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)removeTrack:(id)arg1;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (struct OpaqueFigMutableMovie *)_figMutableMovie;
- (void)_signalMetadataUpdated;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)_initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2;
- (id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3;
- (void)_signalTracksUpdated;
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 copySampleData:(_Bool)arg4 error:(id *)arg5;
- (id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2;

@end
