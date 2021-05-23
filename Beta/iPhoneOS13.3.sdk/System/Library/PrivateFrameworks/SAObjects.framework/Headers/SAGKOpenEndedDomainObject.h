/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, SAGKDirectAnswer;

@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (retain, nonatomic) SAGKDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)openEndedDomainObject;
+ (id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
