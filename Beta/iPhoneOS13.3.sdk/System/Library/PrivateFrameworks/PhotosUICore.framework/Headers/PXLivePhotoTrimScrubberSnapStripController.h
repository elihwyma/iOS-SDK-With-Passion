/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXLivePhotoTrimScrubber, PXLivePhotoTrimScrubberSnapStripControllerSpec, PXSnapStripView;

@interface PXLivePhotoTrimScrubberSnapStripController : NSObject

{
    _Bool _allowStartEndTimeSnapIndicators;
    PXLivePhotoTrimScrubberSnapStripControllerSpec *_spec;
    PXLivePhotoTrimScrubber *_trimScrubber;
    PXSnapStripView *_snapStripView;
}

@property (retain, nonatomic) PXLivePhotoTrimScrubberSnapStripControllerSpec *spec;
@property (retain, nonatomic) PXLivePhotoTrimScrubber *trimScrubber;
@property (retain, nonatomic) PXSnapStripView *snapStripView;
@property (nonatomic) _Bool allowStartEndTimeSnapIndicators;

- (id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2 style:(unsigned long long)arg3 skipSingleIndicatorWithCurrentTime:(_Bool)arg4;
- (id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2 suggestedTime:(CDStruct_1b6d18a9)arg3 style:(unsigned long long)arg4 skipSingleIndicatorWithCurrentTime:(_Bool)arg5;
- (void)updateSnapStripView;
- (void)updateSnapStripViewAnimated:(_Bool)arg1;

@end
