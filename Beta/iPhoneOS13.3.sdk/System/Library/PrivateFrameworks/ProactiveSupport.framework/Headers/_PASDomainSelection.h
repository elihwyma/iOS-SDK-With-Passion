/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

#import <ProactiveSupport/Swift-Protocol.h>

@interface _PASDomainSelection : NSObject <Swift>

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (id)initWithDomainsFromArray:(id)arg1;
- (id)initWithDomainsFromSet:(id)arg1;
- (_Bool)containsDomain:(id)arg1;
- (id)allDomains;
- (id)globPatterns;
- (_Bool)isEqualToDomainSelection:(id)arg1;

@end
