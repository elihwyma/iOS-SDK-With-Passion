/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *displayIDsWithBadgingEnabled;
@property (nonatomic, readonly) _Bool alwaysPerformDefaultAction;
@property (nonatomic, readonly) _Bool dontSuppressForPrivacyWhenUnlocked;
@property (nonatomic, readonly) _Bool shouldTestBannerPlayTextTone;
@property (nonatomic, readonly) _Bool alwaysSpeakNotifications;
@property (nonatomic, readonly) NSArray *legacyAlarmList;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;

@end
