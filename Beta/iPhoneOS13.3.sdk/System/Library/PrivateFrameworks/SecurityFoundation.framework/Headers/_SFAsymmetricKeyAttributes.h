/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFKeySpecifier;

@interface _SFAsymmetricKeyAttributes : NSObject

{
    _SFKeySpecifier *_asymmetricKeySpecifier;
    struct NSString *_asymmetricKeyDomain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) _SFKeySpecifier *keySpecifier;
@property (copy, nonatomic, readonly) NSString *keyDomain;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(struct NSString *)arg2;

@end
