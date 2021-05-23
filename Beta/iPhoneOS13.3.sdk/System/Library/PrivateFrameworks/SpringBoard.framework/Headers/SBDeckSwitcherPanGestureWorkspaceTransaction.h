/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>

@class NSString;

@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_begin;
- (void)_didComplete;
- (void)_removeHysteresisFromTranslation;
- (long long)_gestureType;
- (void)_beginWithGesture:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (id)selectedAppLayoutForGestureRecognizer:(id)arg1;
- (id)touchHistoryProvidingGesture;

@end
