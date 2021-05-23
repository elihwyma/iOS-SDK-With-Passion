/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBacklightController;

@interface SBDefaultProximityBacklightPolicy : NSObject

{
    SBBacklightController *_backlightController;
    _Bool _scheduled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBacklightController:(id)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
- (void)_restoreBacklightFactor;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;
- (void)_backlightWillUndim:(id)arg1;
- (void)_cancelScheduledBacklightFactorToZero;
- (void)_doBacklightFactorChange;

@end
