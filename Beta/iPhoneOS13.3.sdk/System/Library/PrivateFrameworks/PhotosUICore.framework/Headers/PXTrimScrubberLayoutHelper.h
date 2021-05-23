/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXTrimScrubberLayoutHelper : NSObject

{
    _Bool _needsUpdate;
    double _filmstripScale;
    double _pivotAnchor;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _viewportFrame;
    struct UIEdgeInsets _horizontalTimelineInset;
    struct CGRect _filmstripFrame;
    struct CGRect _filmstripFrameInScrubberSpace;
    struct CGRect _visibleFrameInFilmstripSpace;
}

@property (nonatomic) struct CGRect filmstripFrame;
@property (nonatomic) struct CGRect filmstripFrameInScrubberSpace;
@property (nonatomic) struct CGRect visibleFrameInFilmstripSpace;
@property (nonatomic) _Bool needsUpdate;
@property (nonatomic, readonly) struct CGRect durationInsetFilmstripFrame;
@property (nonatomic) CDStruct_1b6d18a9 duration;
@property (nonatomic) struct CGRect viewportFrame;
@property (nonatomic) double filmstripScale;
@property (nonatomic) double pivotAnchor;
@property (nonatomic) struct UIEdgeInsets horizontalTimelineInset;

- (id)init;
- (void)_updateIfNeeded;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (CDStruct_1b6d18a9)timeForOffsetInScrubberSpace:(double)arg1;

@end
