/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFKeySpecifier;

@interface SFSymmetricKeyAttributes : NSObject

{
    id _symmetricKeyAttributesInternal;
    NSString *persistentIdentifier;
}

@property (copy, nonatomic, readonly) _SFKeySpecifier *keySpecifier;
@property (copy, nonatomic, readonly) NSString *keyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSString *persistentIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithSpecifier:(id)arg1 domain:(struct NSString *)arg2;
- (void)setKeySpecifier:(id)arg1;

@end
