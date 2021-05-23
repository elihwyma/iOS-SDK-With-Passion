/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *fromEmail;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *toEmail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
