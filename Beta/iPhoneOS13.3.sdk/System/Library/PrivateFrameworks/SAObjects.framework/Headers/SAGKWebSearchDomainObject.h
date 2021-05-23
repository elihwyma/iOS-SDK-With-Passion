/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAGKDomainObject.h>

@class NSArray, NSString;

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (copy, nonatomic) NSArray *image;
@property (copy, nonatomic) NSArray *linkedAnswerGroups;
@property (copy, nonatomic) NSString *query;

+ (id)webSearchDomainObject;
+ (id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
