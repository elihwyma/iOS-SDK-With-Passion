/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface OKPanGenerator : NSObject

{
    NSArray *_panSteps;
    _Bool _isReversed;
    _Bool _loops;
    double _mediaItemAspectRatio;
    NSArray *_mediaItemRegionsOfInterest;
    unsigned long long _panningType;
    unsigned long long _randomizer;
    struct CGRect _referenceFrame;
}

@property (nonatomic) double mediaItemAspectRatio;
@property (retain, nonatomic) NSArray *mediaItemRegionsOfInterest;
@property (nonatomic) struct CGRect referenceFrame;
@property (nonatomic) unsigned long long panningType;
@property (nonatomic) unsigned long long randomizer;
@property (nonatomic) _Bool isReversed;
@property (nonatomic) _Bool loops;

- (id)init;
- (void)dealloc;
- (id)initWithAspectRatio:(double)arg1;
- (id)_panStepWithRelativeFrame:(struct CGRect)arg1 forFittingMode:(unsigned long long)arg2 anchorPoint:(struct CGPoint)arg3 andExtraScale:(double)arg4;
- (struct CGRect)_frameWithAspectRatio:(double)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(struct CGPoint)arg3;
- (id)_panStepWithRelativeFrame:(struct CGRect)arg1 forFittingMode:(unsigned long long)arg2 andAnchorPoint:(struct CGPoint)arg3;
- (struct CGRect)_fullROI;
- (void)_updatePanSteps;
- (void)enumeratePanStepsWithBlock:(CDUnknownBlockType)arg1;

@end
