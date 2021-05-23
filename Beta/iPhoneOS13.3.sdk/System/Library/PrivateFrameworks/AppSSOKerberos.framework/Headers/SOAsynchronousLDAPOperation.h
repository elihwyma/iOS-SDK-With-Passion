/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <AppSSOKerberos/SOAsynchronousOperation.h>

@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation

{
    unsigned short _port;
    CDUnknownBlockType _completion;
    NSString *_realm;
    NSString *_host;
    NSString *_bundleIdentifier;
}

@property (copy) CDUnknownBlockType completion;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void)main;
- (id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andCompetion:(CDUnknownBlockType)arg5;

@end
