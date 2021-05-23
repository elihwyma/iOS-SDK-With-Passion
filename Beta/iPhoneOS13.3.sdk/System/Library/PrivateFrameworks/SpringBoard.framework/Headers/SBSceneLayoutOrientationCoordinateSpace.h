/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@interface SBSceneLayoutOrientationCoordinateSpace : SBSceneLayoutCoordinateSpace

{
    long long _referenceOrientation;
    long long _orientation;
}

- (struct CGRect)bounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (id)initWithInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3;

@end
