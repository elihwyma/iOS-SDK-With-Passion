/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSDate.h>

#import <EmailFoundation/Swift-Protocol.h>

@class EFSQLBinding, NSString;

@interface NSDate (EmailFoundationAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

+ (id)_ef_tonight:(id)arg1;
+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;
+ (id)_ef_nightDateComponents;
+ (id)_ef_morningDateComponents;
+ (_Bool)ef_isPastTonight;
+ (id)ef_tonight;
+ (id)ef_tomorrowMorning;
+ (id)ef_nextWeekMorning;

- (_Bool)ef_isLaterThanDate:(id)arg1;
- (_Bool)ef_isEarlierThanDate:(id)arg1;
- (double)ef_timeIntervalSinceDate:(id)arg1;

@end
