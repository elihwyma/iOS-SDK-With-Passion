/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVController, MPAVItem, NSString, UIView;

@interface MPViewController : UIViewController <Swift>

{
    id _delegate;
    long long _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    _Bool _registeredForPlayerNotifications;
    long long _playerLockedCount;
    _Bool _idleTimerDisabled;
}

@property (nonatomic) _Bool registeredForPlayerNotifications;
@property (nonatomic) _Bool observesApplicationSuspendResumeEventsOnly;
@property (nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) _Bool idleTimerDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) MPAVController *player;
@property (retain, nonatomic, readonly) UIView *view;

- (id)init;
- (void)dealloc;
- (void)setView:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)removeChildViewController:(id)arg1;
- (_Bool)_canReloadView;
- (_Bool)isAppearing;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (void)lockPlayer;
- (void)unlockPlayer;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationDidResumeEventsOnly;
- (void)applicationResumed;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)setAppearing:(_Bool)arg1;

@end
