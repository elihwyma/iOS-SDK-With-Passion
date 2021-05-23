/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <AVFoundation/AVAsset.h>

@interface AVAsset (MediaAnalysis)

- (id)vcp_enabledTracksWithMediaType:(id)arg1;
- (_Bool)vcp_isShortMovie;
- (void)vcp_scaleSlowmoTimeRange:(CDStruct_e83c9415)arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3;
- (void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(CDStruct_e83c9415)arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5;
- (id)vcp_firstEnabledTrackWithMediaType:(id)arg1;
- (CDStruct_1b6d18a9)vcp_livePhotoStillDisplayTime;
- (id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2;

@end
