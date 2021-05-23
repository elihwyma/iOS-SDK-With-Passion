/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAAnswerDirectAnswer, SAUIAppPunchOut;

@interface SAAnswerDomainObject : SADomainObject

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) SAAnswerDirectAnswer *directAnswer;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
