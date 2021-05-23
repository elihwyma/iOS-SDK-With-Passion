/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSCalendarDate.h>

@interface NSCalendarDate (DataAccessUtils)

+ (id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3;

- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)tzDateToDateInGMT:(id)arg1;
- (id)gmtMidnight;
- (id)nearestMidnight;
- (void)getGregorianDate:(CDStruct_79f9e052 *)arg1;
- (_Bool)isGMTMidnight;

@end
