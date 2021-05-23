/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSArray, NSError;

@interface EMSecurityInformation : NSObject <Swift>

{
    _Bool _isEncrypted;
    _Bool _hasEncryptedDescendantPart;
    NSArray *_signers;
    NSError *_smimeError;
}

@property (nonatomic, readonly) _Bool isEncrypted;
@property (nonatomic, readonly) _Bool isSigned;
@property (nonatomic, readonly) NSArray *signers;
@property (nonatomic, readonly) _Bool hasEncryptedDescendantPart;
@property (nonatomic, readonly) NSError *smimeError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigners:(id)arg1 isEncrypted:(_Bool)arg2 hasEncryptedDescendantPart:(_Bool)arg3 smimeError:(id)arg4;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end
