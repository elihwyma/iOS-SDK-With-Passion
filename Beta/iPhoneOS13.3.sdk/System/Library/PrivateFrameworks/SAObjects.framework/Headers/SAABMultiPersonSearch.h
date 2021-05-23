/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (copy, nonatomic) NSArray *personSearches;
@property (copy, nonatomic) NSNumber *resultsLimit;

+ (id)multiPersonSearch;
+ (id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
