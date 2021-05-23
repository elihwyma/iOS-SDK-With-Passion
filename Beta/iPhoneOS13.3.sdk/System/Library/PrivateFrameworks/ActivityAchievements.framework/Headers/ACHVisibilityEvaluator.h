/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSString;

@interface ACHVisibilityEvaluator : NSObject

{
    NSCalendar *_calendar;
    NSDate *_injectedNow;
    NSString *_injectedWatchCountryCode;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *injectedNow;
@property (retain, nonatomic) NSString *injectedWatchCountryCode;

- (id)init;
- (_Bool)unearnedAchievementIsVisibleNow:(id)arg1;
- (void)_injectNow:(id)arg1;
- (void)_injectWatchCountryCode:(id)arg1;

@end
