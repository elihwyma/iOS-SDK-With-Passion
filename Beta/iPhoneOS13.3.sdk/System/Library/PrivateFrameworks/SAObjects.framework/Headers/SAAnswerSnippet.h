/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut;

@interface SAAnswerSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *answerPunchOut;
@property (copy, nonatomic) NSArray *answers;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
