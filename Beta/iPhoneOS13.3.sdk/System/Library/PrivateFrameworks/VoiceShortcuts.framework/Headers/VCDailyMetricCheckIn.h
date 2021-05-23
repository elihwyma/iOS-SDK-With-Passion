/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSDate, NSUserDefaults;

@interface VCDailyMetricCheckIn : NSObject

{
    NSDate *_currentDate;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (copy, nonatomic, readonly) NSDate *currentDate;
@property (copy, nonatomic, readonly) NSDate *checkInDate;

+ (id)recentCheckIn;

- (id)init;
- (id)initWithCurrentDate:(id)arg1 defaults:(id)arg2;
- (_Bool)isCheckInAllowed;
- (void)updateCheckInToNow;

@end
