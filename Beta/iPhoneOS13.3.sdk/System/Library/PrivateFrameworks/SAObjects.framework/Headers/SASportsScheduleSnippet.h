/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsScheduleSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *matchups;

+ (id)scheduleSnippet;
+ (id)scheduleSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
