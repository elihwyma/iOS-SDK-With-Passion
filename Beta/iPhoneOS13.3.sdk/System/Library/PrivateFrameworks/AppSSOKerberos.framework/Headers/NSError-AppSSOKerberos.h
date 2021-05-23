/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSError.h>

@interface NSError (AppSSOKerberos)

+ (id)kerberosErrorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)credentialMissing;
+ (id)passwordChangeNotEnabled;
+ (id)servicePrincipalNameMissing;
+ (id)invalidKerberosOperation;
+ (id)hostNameMissing;
+ (id)unhandledKerberosResult;
+ (id)sourceAppNotAllowed;

@end
