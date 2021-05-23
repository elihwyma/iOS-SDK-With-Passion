/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAnswerAbstractSocialPost.h>

@class NSNumber;

@interface SAAnswerSocialAnswer : SAAnswerAbstractSocialPost

@property (copy, nonatomic) NSNumber *selectedAnswer;

+ (id)socialAnswer;
+ (id)socialAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
