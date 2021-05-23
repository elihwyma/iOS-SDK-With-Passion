/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFAuthenticatedEncryptionOperation, _SFECDHOperation, _SFKeySpecifier;

@protocol SFDigestOperation;

@interface _SFIESOperation : NSObject

{
    id _iesOperationInternal;
    long long _curve;
}

@property (copy, nonatomic) _SFECDHOperation *diffieHellmanOperation;
@property (copy, nonatomic) _SFAuthenticatedEncryptionOperation *encryptionOperation;
@property long long curve;
@property (copy, nonatomic) id <SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) _SFKeySpecifier *encryptionKeySpecifier;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)initWithCurve:(long long)arg1 diffieHellmanOperation:(id)arg2 encryptionOperation:(id)arg3 digestOperation:(id)arg4;
- (const struct ccdigest_info *)_ccDigestInfoWithError:(id *)arg1;

@end
