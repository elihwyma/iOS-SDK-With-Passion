/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SADomainObject : SABaseAceObject <Swift>

@property (copy, nonatomic) NSURL *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
