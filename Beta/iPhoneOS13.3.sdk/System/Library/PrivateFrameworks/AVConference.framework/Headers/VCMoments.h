/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, VCMomentsHistory, VideoAttributes;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMoments : NSObject

{
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMomentsHistory *_momentsHistory;
    unsigned int _capabilities;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    _Bool _isActive;
    _Bool _isClientRegistered;
    VideoAttributes *_remoteScreenAttributes;
    NSMutableSet *_requests;
    _Bool _lastRequest;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic, readonly) _Bool isActive;
@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)countForRequestType:(int)arg1;
+ (int)typeForRequest:(id)arg1;
+ (_Bool)deviceHasSufficientFreeSpace;
+ (unsigned long long)fileSize:(id)arg1;
+ (unsigned long long)deviceFreeDiskSpace;

- (void)dealloc;
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2;
- (void)processRequest:(id)arg1;
- (void)setTransportDelegate:(id)arg1;
- (id)transportDelegate;
- (void)setFrameRate:(float)arg1;
- (void)registerClient;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)cleanupActiveRequests;
- (_Bool)validateIncomingRequest:(id)arg1;
- (void)processRemotePhotoRequest:(id)arg1;
- (void)processRemoteLivePhotoRequest:(id)arg1;
- (void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2;
- (void)updateVCMomentsMode;
- (void)updateActiveStatus;
- (id)momentsDelegate;
- (_Bool)isHistorySupported;
- (void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned int)arg4;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;
- (_Bool)validateNumberOfRequestsWithError:(id *)arg1;
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2;
- (void)setMomentsDelegate:(id)arg1;
- (_Bool)processClientRequest:(id)arg1 error:(id *)arg2;
- (void)deregisterClient;
- (void)getInitialRemoteScreenAttributes:(id)arg1;
- (unsigned long long)directorySize:(id)arg1;

@end
