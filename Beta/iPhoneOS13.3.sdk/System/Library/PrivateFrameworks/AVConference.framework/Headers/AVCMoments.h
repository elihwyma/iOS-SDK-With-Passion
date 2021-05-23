/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;

@protocol AVCMomentsDelegate, OS_dispatch_queue;

@interface AVCMoments : NSObject

{
    AVConferenceXPCClient *_connection;
    long long _streamToken;
    id _delegate;
    unsigned int _capabilities;
    NSString *_requesterID;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _currentActiveRequestsCount;
    int _currentPendingRequestsCount;
}

@property (nonatomic, readonly) id <AVCMomentsDelegate> delegate;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) NSString *requesterID;
@property (nonatomic, readonly) int activeRequestCount;
@property (nonatomic, readonly) int pendingRequestCount;

- (void)dealloc;
- (id)description;
- (void)disconnect;
- (_Bool)connect;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;
- (void)didFinishRequestHelperWithResult:(id)arg1;
- (id)newDictionaryForRequest:(id)arg1;
- (id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)newRequestWithMediaType:(unsigned char)arg1 requesteeID:(id)arg2;
- (_Bool)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id *)arg2;
- (_Bool)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id *)arg2;

@end
