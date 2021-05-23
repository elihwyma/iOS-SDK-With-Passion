/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameAnnotation;
@property (copy, nonatomic) NSArray *structuredAnswers;

+ (id)encyclopediaDomainObject;
+ (id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
