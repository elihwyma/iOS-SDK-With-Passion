/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary;

@protocol AVCTextStreamDelegate, OS_dispatch_queue;

@interface AVCTextStream : NSObject

{
    AVConferenceXPCClient *_connection;
    AVCMediaStreamConfig *_configuration;
    id _delegate;
    long long _streamToken;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCMediaStreamConfig *configuration;
@property (nonatomic) long long direction;
@property (nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic) id <AVCTextStreamDelegate> delegate;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)refreshLoggingParameters;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)registerBlocksForDelegateNotifications;
- (void)deregisterBlocksForDelegateNotifications;
- (_Bool)configure:(id)arg1 error:(id *)arg2;
- (_Bool)initializeServerWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (_Bool)validateResultsDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;

@end
