/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <SMTPAccount.h>

@class MFOSXServerIMAPAccount, NSDictionary;

@interface MFOSXServerSMTPAccount : SMTPAccount

{
    MFOSXServerIMAPAccount *_mailAccount;
}

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (nonatomic, readonly) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (id)password;
- (id)hostname;
- (id)username;
- (_Bool)usesSSL;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (unsigned int)portNumber;
- (_Bool)shouldUseAuthentication;

@end
