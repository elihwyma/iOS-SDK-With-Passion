/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetDismissGestureSettings, NSString, UIGestureRecognizer, UIPanGestureRecognizer, UIViewController;

@protocol SBCoverSheetSystemGestureDelegatePositionProviding;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <Swift>

{
    int _syntheticAppearState;
    id <SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
    UIPanGestureRecognizer *_presentGestureRecognizer;
    UIViewController *_viewController;
    UIGestureRecognizer *_dismissGestureRecognizer;
    UIGestureRecognizer *_dismissAddendumGestureRecognizer;
    UIGestureRecognizer *_preemptingGestureRecognizer;
    CSCoverSheetDismissGestureSettings *_dismissGestureSettings;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIGestureRecognizer *dismissGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *preemptingGestureRecognizer;
@property (retain, nonatomic) CSCoverSheetDismissGestureSettings *dismissGestureSettings;
@property (weak, nonatomic) id <SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider;
@property (retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer;
@property (nonatomic) int syntheticAppearState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isDismissGestureActive;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)isAnyGestureActivelyRecognized;
- (id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;
- (_Bool)isPresentGestureActive;
- (_Bool)_canDismissGestureBegin;
- (_Bool)_isGestureActivelyRecognized:(id)arg1;
- (_Bool)_canPresentGestureBegin;
- (_Bool)_isGestureAllowedByTransientOverlaysOrTopmostApp;

@end
