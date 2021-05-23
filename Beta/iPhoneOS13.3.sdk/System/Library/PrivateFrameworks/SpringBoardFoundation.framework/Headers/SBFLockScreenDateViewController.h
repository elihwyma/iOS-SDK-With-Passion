/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIViewController.h>

@class NSString, _UILegibilitySettings;

@protocol SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController

{
    id _timerToken;
    _Bool _isVisible;
    id _minuteHandlerToken;
    _Bool _disablesUpdates;
    _Bool _screenOff;
    _UILegibilitySettings *_legibilitySettings;
    id <SBFDateProviding> _dateProvider;
}

@property (nonatomic) _Bool screenOff;
@property (nonatomic, getter=isSubtitleHidden) _Bool subtitleHidden;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) id <SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateView;
- (void)_updateState;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)dateView;
- (void)_addObservers;
- (void)_stopUpdateTimer;
- (void)_startUpdateTimer;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(_Bool)arg2;
- (void)setCustomSubtitleView:(id)arg1;
- (id)dateViewIfExists;
- (void)_updateLegibilityStrength;
- (void)_updateFormatIfEnabled;
- (void)_updateFormat;
- (void)_handleTimeZoneChange;
- (void)updateTimeNow;

@end
