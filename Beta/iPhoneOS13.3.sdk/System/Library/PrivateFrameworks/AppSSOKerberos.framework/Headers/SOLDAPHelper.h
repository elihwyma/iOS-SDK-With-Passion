/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@protocol OS_ldap_connection;

@interface SOLDAPHelper : NSObject

{
    _Bool _isConnected;
    NSObject<OS_ldap_connection> *_ldap;
}

@property (retain, nonatomic) NSObject<OS_ldap_connection> *ldap;
@property (nonatomic) _Bool isConnected;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)setupLDAPconnection:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3;
- (void)connectToLDAPWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectToLDAPServer:(id)arg1 andPort:(unsigned short)arg2 andBundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queryforBaseDN:(id)arg1 andScope:(int)arg2 andAttributes:(id)arg3 withFilter:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)useDigestMD5Auth:(id)arg1 andPassword:(id)arg2;
- (void)useKerberosAuth:(struct gss_cred_id_t_desc_struct *)arg1 forSPN:(id)arg2;

@end
