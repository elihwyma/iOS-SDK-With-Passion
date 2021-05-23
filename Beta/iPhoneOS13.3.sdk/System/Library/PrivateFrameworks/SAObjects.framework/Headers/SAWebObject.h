/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) SAWebWebSearchResult *results;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
