/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface SACalendarEventSearch : SADomainCommand

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;

+ (id)eventSearch;
+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
