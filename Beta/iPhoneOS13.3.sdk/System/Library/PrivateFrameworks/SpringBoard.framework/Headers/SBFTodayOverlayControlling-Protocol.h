/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@protocol SBFTodayOverlayControlling

@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) double presentationProgress;
@property (nonatomic, readonly, getter=isPresented) _Bool presented;

- (unsigned short)dismissAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)presentAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)setPresentationProgress:interactive:animated:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addTodayOverlayObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)finalPresentationProgressForPresentationProgress:gestureVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTodayOverlayObserver: /* Error: Ran out of types for this method. */;

@end
