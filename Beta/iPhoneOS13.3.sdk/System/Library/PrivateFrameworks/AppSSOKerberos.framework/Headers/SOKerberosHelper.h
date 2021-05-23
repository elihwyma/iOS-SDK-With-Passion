/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@interface SOKerberosHelper : NSObject

+ (struct gss_cred_id_t_desc_struct *)acquireCredentialForUUID:(id)arg1;
+ (_Bool)authenticate:(struct gss_cred_id_t_desc_struct *)arg1 toServer:(id)arg2 returningToken:(id *)arg3 andError:(id *)arg4;
+ (struct gss_cred_id_t_desc_struct *)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3;
+ (struct gss_cred_id_t_desc_struct *)acquireCredentialForUPN:(id)arg1;
+ (_Bool)_testForUPNForUser:(id)arg1;
+ (_Bool)changePasswordForUPN:(id)arg1 withOldPassword:(id)arg2 withNewPassword:(id)arg3 withError:(id *)arg4;
+ (_Bool)validatePassword:(id)arg1 forUser:(id)arg2;
+ (void)destroyAllCredentials;
+ (void)destroyCredential:(id)arg1;
+ (void)destroyCredentialForUPN:(id)arg1;
+ (id)listCredentials;

@end
