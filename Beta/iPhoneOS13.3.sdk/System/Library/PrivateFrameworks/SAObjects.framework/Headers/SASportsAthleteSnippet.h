/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsAthleteSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *athletes;

+ (id)athleteSnippet;
+ (id)athleteSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
