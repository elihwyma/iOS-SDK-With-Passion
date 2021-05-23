/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSDate *publicationDate;
@property (copy, nonatomic) NSString *source;

+ (id)newsLinkedAnswer;
+ (id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
