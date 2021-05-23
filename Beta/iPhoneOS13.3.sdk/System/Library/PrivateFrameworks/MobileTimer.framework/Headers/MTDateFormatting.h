/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString;

@interface MTDateFormatting : NSObject

{
    NSString *_amString;
    NSString *_pmString;
    NSDateFormatter *_dateOnlyFormatter;
    NSDateFormatter *_timeOnlyFormatter;
    _Bool _use24HourTime;
    _Bool _timeDesignatorAppearsBeforeTime;
}

@property (weak, nonatomic, readonly) NSString *amString;
@property (weak, nonatomic, readonly) NSString *pmString;
@property (nonatomic, readonly) _Bool use24HourTime;
@property (nonatomic, readonly) _Bool timeDesignatorAppearsBeforeTime;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_reloadLocaleInfo;
- (void)_loadLocaleInfo;
- (void)_clearLocaleDependentState;
- (id)_dateOnlyFormatter;
- (id)localizedTimeStringFromDate:(id)arg1 forTimeZone:(id)arg2 timeDesignator:(out id *)arg3;
- (id)_timeOnlyFormatter;
- (id)timeDesignatorForDate:(id)arg1 timeZone:(id)arg2;
- (id)localizedTimeStringFromDate:(id)arg1 timeDesignator:(out id *)arg2;
- (id)timeDesignatorForDate:(id)arg1;

@end
