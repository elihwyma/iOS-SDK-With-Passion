/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainSearchResults.h>

@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults

@property (copy, nonatomic) NSArray *results;

+ (id)searchResults;
+ (id)searchResultsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
