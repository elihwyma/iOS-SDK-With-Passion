/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAnswerAbstractSocialPost.h>

@class NSArray;

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSArray *socialAnswers;

+ (id)socialQuestion;
+ (id)socialQuestionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
