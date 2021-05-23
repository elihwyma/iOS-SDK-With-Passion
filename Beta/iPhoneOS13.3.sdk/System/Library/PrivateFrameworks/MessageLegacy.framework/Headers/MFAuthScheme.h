/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@interface MFAuthScheme : NSObject

+ (void)initialize;
+ (id)knownSchemes;
+ (id)schemeWithName:(id)arg1;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;

- (id)name;
- (id)humanReadableName;
- (_Bool)requiresPassword;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (_Bool)hasEncryption;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(id)arg1;

@end
