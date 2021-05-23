/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSArray *searchTypes;
@property (nonatomic) _Bool strict;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
