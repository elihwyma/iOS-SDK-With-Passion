/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IMWeakReference, NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSBaseSocketPairConnection : NSObject

{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    _Bool _writeSourceIsResumed;
}

@property (nonatomic, readonly) int socket;

- (void)dealloc;
- (void)start;
- (void)setDestination:(id)arg1;
- (void)endSession;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (_Bool)sendData:(id)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(_Bool)arg4;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;

@end
