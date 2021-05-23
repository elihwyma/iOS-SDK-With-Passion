/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKBaseSound.h>

@class NSString, TLAlert;

@interface STKToneAlertSound : STKBaseSound

{
    TLAlert *_alert;
    long long _alertType;
    _Bool _finishedSoundNormally;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithType:(long long)arg1 duration:(double)arg2;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;

@end
