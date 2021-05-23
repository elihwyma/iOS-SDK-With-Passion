/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString;

@interface SAReminderSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *completionStatus;
@property (copy, nonatomic) NSDate *dueAfter;
@property (copy, nonatomic) NSDate *dueBefore;
@property (copy, nonatomic) NSString *listName;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
