/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NMSSHSession, NSData, NSDictionary;

@protocol NMSSHChannelDelegate, OS_dispatch_source;

@interface NMSSHChannel : NSObject

{
    _Bool _requestPty;
    NMSSHSession *_session;
    unsigned long long _bufferSize;
    id <NMSSHChannelDelegate> _delegate;
    long long _type;
    NSData *_lastResponse;
    long long _ptyTerminalType;
    NSDictionary *_environmentVariables;
    struct _LIBSSH2_CHANNEL *_channel;
    const char *_ptyTerminalName;
    NSObject<OS_dispatch_source> *_source;
}

@property (retain, nonatomic) NMSSHSession *session;
@property (nonatomic) struct _LIBSSH2_CHANNEL *channel;
@property (nonatomic) long long type;
@property (nonatomic) const char *ptyTerminalName;
@property (retain, nonatomic) NSData *lastResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) unsigned long long bufferSize;
@property (weak, nonatomic) id <NMSSHChannelDelegate> delegate;
@property (nonatomic) _Bool requestPty;
@property (nonatomic) long long ptyTerminalType;
@property (retain, nonatomic) NSDictionary *environmentVariables;

- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (id)execute:(id)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1;
- (_Bool)openChannel:(id *)arg1;
- (void)closeChannel;
- (_Bool)sendEOF;
- (void)waitEOF;
- (id)execute:(id)arg1 error:(id *)arg2 timeout:(id)arg3;
- (id)readResponseWithError:(id *)arg1 timeout:(id)arg2 userInfo:(id)arg3;
- (void)executeCommandAsynchronously:(id)arg1;
- (_Bool)startShell:(id *)arg1;
- (void)closeShell;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)write:(id)arg1 error:(id *)arg2 timeout:(id)arg3;
- (_Bool)writeData:(id)arg1 error:(id *)arg2 timeout:(id)arg3;
- (_Bool)requestSizeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (_Bool)uploadFile:(id)arg1 to:(id)arg2;
- (_Bool)uploadFile:(id)arg1 to:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (_Bool)downloadFile:(id)arg1 to:(id)arg2;
- (_Bool)downloadFile:(id)arg1 to:(id)arg2 progress:(CDUnknownBlockType)arg3;

@end
