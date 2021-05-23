/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBSoundPreferences : NSObject

+ (id)_soundDefaults;
+ (id)calendarAlarmPath;
+ (id)ringtoneIdentifier;
+ (_Bool)vibrateWhenRinging;
+ (_Bool)vibrateWhenSilent;
+ (id)ringtonePath;

@end
