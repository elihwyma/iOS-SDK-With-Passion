/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@interface SARange : SADomainObject

@property (nonatomic) long long length;
@property (nonatomic) long long start;

+ (id)range;
+ (id)rangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
