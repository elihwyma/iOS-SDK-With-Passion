/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFConnection.h>

@class MFSMTPResponse, NSMutableArray, NSMutableData, NSString;

@interface MFSMTPConnection : MFConnection

{
    MFSMTPResponse *_lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSString *_saveSentMbox;
    int _originalSocketTimeout;
    long long _lastCommandTimestamp;
    id _delegate;
    _Bool _hideLoggedData;
    _Bool _useSaveSent;
    _Bool _dislikesSaveSentMbox;
}

- (id)init;
- (void)setDelegate:(id)arg1;
- (int)state;
- (id)domainName;
- (void)abort;
- (void)setDomainName:(id)arg1;
- (id)lastResponse;
- (int)sendData:(id)arg1;
- (_Bool)authenticateUsingAccount:(id)arg1;
- (_Bool)connectUsingAccount:(id)arg1;
- (int)quit;
- (id)authenticationMechanisms;
- (_Bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (unsigned long long)maximumMessageBytes;
- (_Bool)supportsOutboxCopy;
- (_Bool)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (_Bool)_supportsSaveSentExtension;
- (_Bool)_supportsExtension:(id)arg1;
- (int)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (int)_getReply;
- (id)lastResponseLine;
- (_Bool)_connectUsingAccount:(id)arg1;
- (int)_doHandshakeUsingAccount:(id)arg1;
- (_Bool)supportsBinaryMime;
- (_Bool)supports8BitMime;
- (int)_sendData:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (id)_dataForCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (_Bool)supportsChunking;
- (_Bool)supportsPipelining;
- (id)dataForMailFrom:(id)arg1;
- (id)dataForRcptTo:(id)arg1;
- (id)dataForDataCmd;
- (int)_sendData:(id)arg1;
- (int)sendBData:(id)arg1;
- (int)mailFrom:(id)arg1;
- (int)rcptTo:(id)arg1;
- (void)_setLastResponse:(id)arg1;
- (int)_sendBytes:(const char *)arg1 length:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (int)_readResponseRange:(struct _NSRange *)arg1 isContinuation:(_Bool *)arg2;
- (_Bool)supportsEnhancedStatusCodes;
- (int)noop;
- (long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorTitle:(id *)arg5 errorMessage:(id *)arg6 serverResponse:(id *)arg7 displayError:(_Bool *)arg8 errorCode:(int *)arg9 errorUserInfo:(id *)arg10;
- (long long)timeLastCommandWasSent;
- (void)setUseSaveSent:(_Bool)arg1 toFolder:(id)arg2;

@end
