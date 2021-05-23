/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFAuthScheme.h>

@interface MFCRAM_MD5AuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (_Bool)hasEncryption;
- (Class)authenticatorClass;
- (_Bool)sendsPlainTextPasswords;

@end
