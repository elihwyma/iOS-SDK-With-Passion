/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSNumber, SAUIImageResource;

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) SAUIImageResource *imageResource;

+ (id)imageLinkedAnswer;
+ (id)imageLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
