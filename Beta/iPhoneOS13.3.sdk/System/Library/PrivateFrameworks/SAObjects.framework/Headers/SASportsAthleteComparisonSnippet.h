/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsAthleteSnippet.h>

@class NSDictionary;

@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (copy, nonatomic) NSDictionary *comparisonItemDetails;

+ (id)athleteComparisonSnippet;
+ (id)athleteComparisonSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
