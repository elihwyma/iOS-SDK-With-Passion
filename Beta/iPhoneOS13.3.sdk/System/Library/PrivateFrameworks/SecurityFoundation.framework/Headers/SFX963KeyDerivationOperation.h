/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation : NSObject

{
    id _x963KeyDerivationOperationInternal;
}

@property (copy, nonatomic) id <SFKeyDerivingOperation> sharedSecretOperation;
@property (copy, nonatomic) id <SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (long long)keySource;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
- (id)initWithSharedSecretOperation:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2;

@end
