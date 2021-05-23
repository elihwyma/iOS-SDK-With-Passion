/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICADIProvisionSession : NSObject

{
    unsigned long long _accountID;
    unsigned int _sessionID;
}

- (void)dealloc;
- (id)initWithAccountID:(unsigned long long)arg1;
- (_Bool)startWithServerActionData:(id)arg1 returningClientData:(id *)arg2 error:(id *)arg3;
- (_Bool)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id *)arg3;
- (void)_destroySession;

@end
