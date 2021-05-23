/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <SMTPAccount.h>

@class AOLAccount, NSString;

@interface MFAOLSMTPAccount : SMTPAccount

{
    AOLAccount *_account;
}

@property (retain, nonatomic, getter=mailAccountIfAvailable) AOLAccount *mailAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)accountTypeIdentifier;

- (id)password;
- (id)hostname;
- (id)username;
- (_Bool)usesSSL;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (unsigned int)portNumber;
- (id)oauth2Token;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (_Bool)shouldUseAuthentication;
- (id)displayHostname;

@end
