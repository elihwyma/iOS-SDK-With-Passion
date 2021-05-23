/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationController.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimer;

@protocol NTKMoonPhaseComplicationDisplay;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <Swift>

{
    NSDate *_timeTravelDate;
    struct {
        unsigned int wantsPhaseName:1;
        unsigned int wantsPhaseNumber:1;
        unsigned int wantsEventAndDate:1;
        unsigned int wantsLocked:1;
        unsigned int wantsPaused:1;
    } _displayFlags;
    NSTimer *_afterEventTimer;
    _Bool _paused;
    _Bool _missedUpdateWhilePaused;
    struct NSString *_token;
    CLLocation *_location;
}

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) CLLocation *location;
@property (weak, nonatomic, readonly) id <NTKMoonPhaseComplicationDisplay> legacyDisplay;

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void)_activate;
- (void)_deactivate;
- (void)_updateDisplay;
- (_Bool)hasTapAction;
- (void)performTapAction;
- (void)setShowsLockedUI:(_Bool)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_asyncUpdateDisplay;
- (void)_updateDisplayForced:(_Bool)arg1;
- (void)_invalidateEventTimer;
- (void)_afterEventTimerFired:(id)arg1;
- (void)_scheduleAfterEventTimer:(id)arg1;

@end
