/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (nonatomic, readonly) NSData *publicName;

+ (id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id *)arg2;

- (id)dataRepresentationWithError:(id *)arg1;
- (_Bool)verifySignature:(id)arg1 ofData:(id)arg2 error:(id *)arg3;

@end
