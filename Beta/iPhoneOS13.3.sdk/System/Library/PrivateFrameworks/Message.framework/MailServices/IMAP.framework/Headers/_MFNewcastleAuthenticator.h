/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <ECSASLAuthenticator.h>

@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : ECSASLAuthenticator

{
    _Bool _sentResponse;
    CastleIMAPAccount *_castleAccount;
}

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

- (id)saslName;
- (id)responseForServerData:(id)arg1;
- (_Bool)justSentPlainTextPassword;
- (id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (_Bool)supportsInitialClientResponse;

@end
