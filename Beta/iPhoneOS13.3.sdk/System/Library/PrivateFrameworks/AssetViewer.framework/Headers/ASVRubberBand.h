/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVRubberBand : NSObject

{
    float _rubberBandFactor;
    float _minOffset;
    float _maxOffset;
    float _overshoot;
}

@property (nonatomic) float rubberBandFactor;
@property (nonatomic) float minOffset;
@property (nonatomic) float maxOffset;
@property (nonatomic) float overshoot;

- (id)initWithRubberBandFactor:(float)arg1 minOffset:(float)arg2 maxOffset:(float)arg3 overshoot:(float)arg4;
- (float)rubberBandOffsetForOffset:(float)arg1;
- (float)offsetForRubberBandOffset:(float)arg1;
- (_Bool)offsetIsWithinRubberBandedRange:(float)arg1;

@end
