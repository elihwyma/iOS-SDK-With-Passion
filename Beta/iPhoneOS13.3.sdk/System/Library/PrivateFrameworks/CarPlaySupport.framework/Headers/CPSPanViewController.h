/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIViewController.h>

@class CPSPanView, NSArray, NSString;

@protocol CPSPanEventDelegate;

@interface CPSPanViewController : UIViewController

{
    _Bool _rightHandDrive;
    id <CPSPanEventDelegate> _panDelegate;
    CPSPanView *_panView;
    NSArray *_nudgeGestureRecognizers;
}

@property (retain, nonatomic) CPSPanView *panView;
@property (retain, nonatomic) NSArray *nudgeGestureRecognizers;
@property (weak, nonatomic) id <CPSPanEventDelegate> panDelegate;
@property (nonatomic, readonly) double sideButtonTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)panView:(id)arg1 panWithDirection:(long long)arg2;
- (void)panView:(id)arg1 panBeganWithDirection:(long long)arg2;
- (void)panView:(id)arg1 panEndedWithDirection:(long long)arg2;
- (id)_linearFocusItems;
- (void)_handleNudgeLongPress:(id)arg1;
- (void)_handleNudgeTapped:(id)arg1;
- (id)_linearFocusItemsWithPresentedMapButtons:(id)arg1;

@end
