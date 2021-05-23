/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isRingerMuted) _Bool ringerMuted;
@property (retain, nonatomic) NSString *calendarAlarmPath;
@property (nonatomic, readonly) _Bool vibrateWhenRinging;
@property (nonatomic, readonly) _Bool vibrateWhenSilent;
@property (nonatomic, readonly) _Bool playSoundOnDeviceWake;
@property (nonatomic, readonly) _Bool debugEUVolumeLimit;

- (void)_bindAndRegisterDefaults;

@end
