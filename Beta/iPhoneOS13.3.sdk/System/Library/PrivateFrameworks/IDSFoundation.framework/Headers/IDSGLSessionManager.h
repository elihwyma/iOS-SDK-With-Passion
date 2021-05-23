/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol IDSGLSessionManagerDelegate;

@interface IDSGLSessionManager : NSObject

{
    id <IDSGLSessionManagerDelegate> _delegate;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _recvBlock;
    NSString *_sessionID;
    _Bool _isServer;
    int _zudpFd;
    int _connFd;
    int _streamFd;
    NSMutableArray *_serverDataBufferArray;
}

- (void)dealloc;
- (void)invalidate;
- (_Bool)_startReliableServer;
- (_Bool)_startReliableClient;
- (void)_sendServerBufferedData;
- (long long)sendGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (id)initWithDelegate:(id)arg1 sendBlock:(CDUnknownBlockType)arg2 recvBlock:(CDUnknownBlockType)arg3 sessionID:(id)arg4;
- (_Bool)startReliableSession:(_Bool)arg1;
- (void)setServerStreamFd:(int)arg1 isServer:(_Bool)arg2;
- (void)recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendZUDPData:(char *)arg1 dataLength:(long long)arg2 linkID:(BOOL)arg3;
- (void)recvZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;

@end
