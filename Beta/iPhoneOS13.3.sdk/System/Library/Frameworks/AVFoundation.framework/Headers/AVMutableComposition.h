/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition

{
    AVMutableCompositionInternal *_mutablePriv;
}

@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic) struct CGSize naturalSize;

+ (id)composition;
+ (id)compositionWithURLAssetInitializationOptions:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_notifyTracksThatSegmentsWillChange:(id)arg1;
- (void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(_Bool)arg2;
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (void)removeTrack:(id)arg1;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;

@end
