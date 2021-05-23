/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SASource : SADomainObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSNumber *remote;

+ (id)source;
+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
