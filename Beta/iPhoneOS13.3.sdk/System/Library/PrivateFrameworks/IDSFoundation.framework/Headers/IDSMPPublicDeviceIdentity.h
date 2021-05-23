/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSMPIdentity.h>

@interface IDSMPPublicDeviceIdentity : IDSMPIdentity

+ (id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id *)arg3;
+ (id)deviceIdentityFromDataRepresentation:(id)arg1 error:(id *)arg2;

- (id)dataRepresentationWithError:(id *)arg1;

@end
