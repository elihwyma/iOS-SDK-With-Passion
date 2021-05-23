/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAMicroblogSearchResultsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *searches;

+ (id)searchResultsSnippet;
+ (id)searchResultsSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
