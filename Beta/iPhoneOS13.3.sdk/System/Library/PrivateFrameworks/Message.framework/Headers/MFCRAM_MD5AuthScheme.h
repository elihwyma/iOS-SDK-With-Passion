/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (_Bool)hasEncryption;
- (Class)authenticatorClass;
- (_Bool)sendsPlainTextPasswords;

@end
