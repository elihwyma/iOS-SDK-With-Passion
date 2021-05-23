/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFLoginAuthenticator : ECSASLAuthenticator

{
    _Bool _justSentPassword;
}

- (id)saslName;
- (id)responseForServerData:(id)arg1;
- (_Bool)justSentPlainTextPassword;

@end
