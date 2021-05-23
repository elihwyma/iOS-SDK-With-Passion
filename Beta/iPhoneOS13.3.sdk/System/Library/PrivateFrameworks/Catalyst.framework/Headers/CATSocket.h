/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATEndPoint;

@protocol CATSocketDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CATSocket : NSObject

{
    _Bool mIsInvalid;
    int mState;
    int _nativeSocket;
    id <CATSocketDelegate> _delegate;
    CATEndPoint *_localEndPoint;
    CATEndPoint *_remoteEndPoint;
    NSObject<OS_dispatch_source> *_socketSource;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
}

@property (nonatomic) int nativeSocket;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *socketSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *socketQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *userQueue;
@property (weak, nonatomic) id <CATSocketDelegate> delegate;
@property (nonatomic, readonly) CATEndPoint *localEndPoint;
@property (nonatomic, readonly) CATEndPoint *remoteEndPoint;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)delegateDidClose;
- (void)delegateDidReceiveData:(id)arg1;
- (void)socketDidCancel;
- (void)socketDidReceiveEvent;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)arg1;
- (void)socketDidReceiveListeningEvent;
- (void)socketDidReceiveData;
- (void)acceptPendingConnection;
- (id)initWithNativeSocket:(int)arg1;
- (_Bool)delegateShouldAcceptNewSocket:(id)arg1;
- (void)delegateDidConnect;
- (void)delegateDidFailWithError:(id)arg1;
- (_Bool)listenWithEndPoint:(id)arg1 error:(id *)arg2;
- (_Bool)connectToEndPoint:(id)arg1 error:(id *)arg2;

@end
