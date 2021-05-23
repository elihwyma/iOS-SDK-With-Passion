/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <ECSASLAuthenticator.h>

@interface _MFGmailClientTokenAuthenticator : ECSASLAuthenticator

{
    _Bool _sentResponse;
}

- (id)saslName;
- (id)responseForServerData:(id)arg1;
- (_Bool)justSentPlainTextPassword;
- (_Bool)supportsInitialClientResponse;

@end
