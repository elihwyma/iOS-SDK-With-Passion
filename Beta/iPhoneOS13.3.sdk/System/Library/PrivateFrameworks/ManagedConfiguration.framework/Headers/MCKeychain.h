/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCKeychain : NSObject

+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(_Bool)arg7 outError:(id *)arg8;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 sysBound:(_Bool)arg9 outError:(id *)arg10;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 sysBound:(_Bool)arg9 outError:(id *)arg10;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 useSystemKeychain:(_Bool)arg7 outError:(id *)arg8;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 sysBound:(_Bool)arg9 enforcePersonalPersona:(_Bool)arg10 outError:(id *)arg11;
+ (struct __CFDictionary *)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 enforcePersonalPersona:(_Bool)arg7 outError:(id *)arg8;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 enforcePersonalPersona:(_Bool)arg6 group:(id)arg7;
+ (const void *)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2 enforcePersonalPersona:(_Bool)arg3;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2 enforcePersonalPersona:(_Bool)arg3;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2 enforcePersonalPersona:(_Bool)arg3;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(_Bool)arg4 enforcePersonalPersona:(_Bool)arg5;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2 enforcePersonalPersona:(_Bool)arg3;
+ (_Bool)itemExistsInKeychain:(void *)arg1 useSystemKeychain:(_Bool)arg2 enforcePersonalPersona:(_Bool)arg3;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 outError:(id *)arg6;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 outError:(id *)arg6;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 group:(id)arg6;
+ (const void *)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(_Bool)arg4;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (_Bool)itemExistsInKeychain:(void *)arg1 useSystemKeychain:(_Bool)arg2;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id *)arg7;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 outError:(id *)arg7;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5;
+ (const void *)copyItemWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (_Bool)itemExistsInKeychain:(void *)arg1;

@end
