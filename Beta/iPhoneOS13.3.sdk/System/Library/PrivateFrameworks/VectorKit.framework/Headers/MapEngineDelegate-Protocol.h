/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@protocol MapEngineDelegate <Swift>

- (unsigned short)didPresent;
- (unsigned short)wantsTimerTick;
- (unsigned short)nearestVenueDidChange:building: /* Error: Ran out of types for this method. */;
- (unsigned short)didStartLoadingData;
- (unsigned short)didFinishLoadingData;
- (unsigned short)didFinishLoadingDataWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)willBecomeFullyDrawn;
- (unsigned short)didUpdateSceneStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)labelManagerDidLayout;
- (unsigned short)selectedLabelMarkerWillDisappear: /* Error: Ran out of types for this method. */;
- (unsigned short)labelMarkerDidChangeState: /* Error: Ran out of types for this method. */;
- (unsigned short)willLayoutWithTimestamp: /* Error: Ran out of types for this method. */;

@end
