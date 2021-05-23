/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSArray, NSString;

@interface AVMutableCompositionTrack : AVCompositionTrack

{
    AVMutableCompositionTrackInternal *_mutablePriv;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) int naturalTimeScale;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (copy, nonatomic) NSArray *segments;

+ (_Bool)expectsPropertyRevisedNotifications;

- (void)setMetadata:(id)arg1;
- (long long)alternateGroupID;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)setAlternateGroupID:(long long)arg1;
- (void)replaceFormatDescription:(struct opaqueCMFormatDescription *)arg1 withFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (void)_notifyAssetThatDurationWillChange;
- (void)_notifyAssetThatDurationDidChangeWithSuccess:(_Bool)arg1;
- (void)_setTrackReaderPropertyValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)_notifySelfThatSegmentsWillChange;
- (void)_notifySelfThatSegmentsDidChangeWithSuccess:(_Bool)arg1;
- (void)_updateTrackAssociationToTrack:(id)arg1 type:(id)arg2 operation:(long long)arg3;
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (_Bool)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (_Bool)validateTrackSegments:(id)arg1 error:(id *)arg2;
- (void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2;
- (void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2;

@end
