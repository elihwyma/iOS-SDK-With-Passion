/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPresentationViewController.h>

@class NSString, UIScreenEdgePanGestureRecognizer;

@protocol CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;

@interface CSDismissableModalViewController : CSPresentationViewController

{
    UIScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    id <CSDismissableModalViewControllerDelegate> _delegate;
    id <CSModalHomeAffordanceControlling> _homeAffordanceController;
}

@property (weak, nonatomic) id <CSDismissableModalViewControllerDelegate> delegate;
@property (retain, nonatomic) id <CSModalHomeAffordanceControlling> homeAffordanceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGestureRecognizer:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)addGrabberView:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(_Bool)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;

@end
