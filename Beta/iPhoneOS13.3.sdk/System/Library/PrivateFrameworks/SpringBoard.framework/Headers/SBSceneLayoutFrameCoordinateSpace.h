/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@class CALayer;

@interface SBSceneLayoutFrameCoordinateSpace : SBSceneLayoutCoordinateSpace

{
    CALayer *_containerLayer;
    CALayer *_contentLayer;
}

- (struct CGRect)bounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withinCoordinateSpace:(id)arg2;

@end
