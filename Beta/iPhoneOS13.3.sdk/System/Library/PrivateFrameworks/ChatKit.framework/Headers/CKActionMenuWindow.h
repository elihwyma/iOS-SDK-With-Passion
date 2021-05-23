/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIAutoRotatingWindow.h>

@class CKActionMenuView, CKDismissView, NSArray, NSString;

@interface CKActionMenuWindow : UIAutoRotatingWindow

{
    CKActionMenuView *_actionMenuView;
    CKDismissView *_dismissView;
}

@property (retain, nonatomic) CKActionMenuView *actionMenuView;
@property (retain, nonatomic) CKDismissView *dismissView;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canAffectStatusBarAppearance;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)actionMenuGestureRecognized:(id)arg1;
- (void)presentActionMenuView:(id)arg1 fromPoint:(struct CGPoint)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (void)dismissActionMenuViewAnimated:(_Bool)arg1;
- (void)dismissViewWasTapped:(id)arg1;

@end
