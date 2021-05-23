/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVHitTestStrategy.h>

@class MISSING_TYPE;

@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy

{
    float _currentPlaneHeight;
    MISSING_TYPE *_currentPlaneNormal;
}

- (id)init;
- (void)clearHistory;
- (id)decisionForPlacementFromOriginalResult:(id)arg1 afterPlacementTimeout:(_Bool)arg2 atImagePoint:(id)arg3 inFrame:(struct CGSize)arg4 withViewportSize:(float)arg5 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (id)decisionForMovementFromOriginalResult:(id)arg1 atImagePoint:(id)arg2 inFrame:(struct CGSize)arg3 withViewportSize:(float)arg4 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (id)interpolatedDecisionForDecision:(id)arg1;
- (_Bool)hasFormedClusterForInitialPlacement:(float *)arg1 planeNormal:(MISSING_TYPE **)arg2;
- (id)reprojectOntoCurrentPlaneAtImagePoint:(id)arg1 inFrame:(struct CGSize)arg2 withViewportSize:(float)arg3 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (_Bool)hasFormedClusterForMovement:(float *)arg1 planeNormal:(MISSING_TYPE **)arg2;
- (_Bool)decisionHistoryContainsPlaneChange:(id)arg1 relativeToNewDecision:(id)arg2;
- (_Bool)resultsContainPoorQualityEstimatedResults:(id)arg1;
- (id)decisionForHitTestOfType:(long long)arg1 atScreenPoint:(id)arg2 inFrame:(struct CGSize)arg3 withViewportSize:(float)arg4 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;

@end
