/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIPopoverController.h>

@class NSString;

@protocol UIPopoverControllerDelegate;

@interface TSKPopoverController : UIPopoverController

{
    _Bool mDismissOnUndo;
    _Bool mDismissOnMoviePlayback;
    _Bool mDismissAnimatedOnOrientationChange;
    id <UIPopoverControllerDelegate> mSavedDelegate;
    _Bool mIsDismissing;
}

@property (nonatomic) _Bool dismissOnUndo;
@property (nonatomic) _Bool dismissOnMoviePlayback;
@property (nonatomic) _Bool dismissAnimatedOnOrientationChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)anyPopoversVisible;
+ (double)defaultPopoverPlacementPadding;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)p_orientationWillChange:(id)arg1;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)p_applicationDidEnterBackground:(id)arg1;
- (void)p_dismissPopoverAnimated:(_Bool)arg1;
- (void)p_sendPopoverHidDelegateMessage;
- (void)moviePlaybackWillBegin:(id)arg1;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4 constrainToView:(_Bool)arg5 withPadding:(double)arg6;

@end
