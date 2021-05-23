/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspector.h>

__attribute__((visibility("hidden")))
@interface AVFormatReaderInspector : AVAssetInspector

{
    struct OpaqueFigFormatReader *_formatReader;
    _Bool didCheckForSaveRestriction;
    _Bool hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader *formatReader;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)duration;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)overallDurationHint;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (CDStruct_1b6d18a9)minimumTimeOffsetFromLive;
- (int)naturalTimeScale;
- (_Bool)providesPreciseDurationAndTiming;
- (id)alternateTrackGroups;
- (id)trackReferences;
- (id)lyrics;
- (id)availableMetadataFormats;
- (long long)trackCount;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (_Bool)canContainFragments;
- (_Bool)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1;
- (_Bool)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;

@end
