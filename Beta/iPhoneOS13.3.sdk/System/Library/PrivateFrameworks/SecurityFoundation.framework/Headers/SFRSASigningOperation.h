/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFRSAKeySpecifier;

@protocol SFDigestOperation;

@interface SFRSASigningOperation : NSObject

{
    id _rsaSigningOperationInternal;
}

@property (copy, nonatomic) _SFRSAKeySpecifier *signingKeySpecifier;
@property (copy, nonatomic) id <SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1;

@end
