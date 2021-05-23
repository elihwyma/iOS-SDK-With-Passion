/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
