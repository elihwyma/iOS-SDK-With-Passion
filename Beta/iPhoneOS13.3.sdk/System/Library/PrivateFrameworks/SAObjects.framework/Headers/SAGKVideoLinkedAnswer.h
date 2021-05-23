/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKImageLinkedAnswer.h>

@class NSNumber;

@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer

@property (copy, nonatomic) NSNumber *runtimeInMilliseconds;

+ (id)videoLinkedAnswer;
+ (id)videoLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
