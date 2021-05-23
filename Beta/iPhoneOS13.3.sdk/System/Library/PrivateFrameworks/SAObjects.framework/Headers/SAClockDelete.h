/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;

+ (id)delete;
+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
