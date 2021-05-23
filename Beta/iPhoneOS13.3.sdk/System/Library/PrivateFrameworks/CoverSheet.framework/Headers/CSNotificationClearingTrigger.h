/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

{
    _Bool _authenticated;
    _Bool _hadNotificationContentAtDisappearance;
    _Bool _didDisableCarDNDUntilEndOfDrive;
    _Bool _uiLocked;
    _Bool _screenOff;
    _Bool _triggerArmed;
    id <CSNotificationClearingTriggerDelegate> _delegate;
}

@property (nonatomic) _Bool triggerArmed;
@property (weak, nonatomic) id <CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) _Bool authenticated;
@property (nonatomic) _Bool hadNotificationContentAtDisappearance;
@property (nonatomic) _Bool didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) _Bool uiLocked;
@property (nonatomic) _Bool screenOff;

- (void)_reset;
- (id)initWithDelegate:(id)arg1;
- (void)_updateTriggerAndClearIfNeeded;
- (_Bool)_shouldArm;
- (_Bool)_wouldArmIfNotForDND;
- (_Bool)_wouldArmIfNotForDNDAndNotificationContent;
- (void)_clearIfNeeded;
- (_Bool)_wouldArmForDiscreteParameters;
- (_Bool)_shouldFire;

@end
