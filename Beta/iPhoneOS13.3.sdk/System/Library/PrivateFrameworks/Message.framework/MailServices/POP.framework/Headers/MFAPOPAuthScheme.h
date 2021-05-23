/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFAPOPAuthScheme : ECAuthenticationScheme

+ (void)initialize;

- (id)name;
- (id)humanReadableName;
- (_Bool)requiresPassword;
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (_Bool)hasEncryption;
- (Class)authenticatorClass;
- (_Bool)supportsAccountType:(id)arg1;

@end
