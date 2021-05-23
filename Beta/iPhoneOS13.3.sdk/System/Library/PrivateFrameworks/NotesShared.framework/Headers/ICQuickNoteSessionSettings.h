/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICQuickNoteSessionSettings : NSObject

+ (void)initialize;
+ (long long)sessionDuration;
+ (void)setSessionDuration:(long long)arg1;
+ (_Bool)hasAccountSupportingLockScreen;
+ (long long)showOnLockScreenSettingValue;
+ (void)setShowOnLockScreen:(long long)arg1;
+ (long long)showOnLockScreen;
+ (void)disableNotesOnLockScreenIfNecessary;
+ (void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;

@end
