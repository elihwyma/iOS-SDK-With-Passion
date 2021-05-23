/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, VCConnectionManager;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCIDSSessionInfoSynchronizer : NSObject

{
    NSMutableArray *_peerSubscribedStreams;
    NSMutableDictionary *_peerPublishedStreams;
    NSMutableArray *_publishedStreams;
    NSMutableDictionary *_subscribedStreams;
    CDUnknownBlockType _peerSubscribedStreamCallback;
    CDUnknownBlockType _peerPublishedStreamCallback;
    CDUnknownBlockType _errorReponseCallback;
    id _delegate;
    unsigned int _currentParticipantGenerationCounter;
    NSNumber *_primaryLinkID;
    NSNumber *_duplicationLinkID;
    VCConnectionManager *_connectionManager;
    id _reportingAgentWeak;
    _Bool _isSessionInfoErrorResponseReported;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _sessionInfoRequestBytesUsed;
    int _sessionInfoResponseBytesUsed;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
}

@property (retain, nonatomic) NSNumber *primaryLinkID;
@property (retain, nonatomic) NSNumber *duplicationLinkID;
@property (copy, nonatomic) CDUnknownBlockType peerSubscribedStreamCallback;
@property (copy, nonatomic) CDUnknownBlockType peerPublishedStreamCallback;
@property (copy, nonatomic) CDUnknownBlockType errorReponseCallback;
@property (readonly) id reportingAgent;

- (void)dealloc;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (void)periodicTask:(void *)arg1;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 reportingAgent:(id)arg3;
- (void)updateVCIDSSessionInfoResponse:(id)arg1;
- (void)optInStreamIDsForNewPrimaryConnection:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)optInStreamIDsForConnection:(id)arg1;
- (void)optOutStreamIDsForNonPrimaryConnection:(id)arg1 sentOnConnection:(id)arg2;
- (void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg1;
- (void)resetParticipantGenerationCounter;
- (void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg1;
- (void)setErrorResponseCallback:(CDUnknownBlockType)arg1;
- (void)flushRealTimeReportingStats;
- (id)sessionInfoSynchronizerDelegate;
- (void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg1;

@end
