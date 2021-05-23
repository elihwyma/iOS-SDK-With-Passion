/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsTeamSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *teams;

+ (id)teamSnippet;
+ (id)teamSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
