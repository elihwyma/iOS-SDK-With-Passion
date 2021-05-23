/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, SAReminderTrigger;

@interface SAReminderListSearch : SADomainCommand

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderTrigger *trigger;

+ (id)listSearch;
+ (id)listSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
