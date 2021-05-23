/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;

@protocol AVCAudioPowerSpectrumMeterDelegate, OS_dispatch_queue;

@interface AVCAudioPowerSpectrumMeter : NSObject

{
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    double _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    unsigned int _sessionToken;
}

@property (nonatomic, readonly) id <AVCAudioPowerSpectrumMeterDelegate> delegate;
@property (nonatomic, readonly) unsigned int sessionToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)dealloc;
- (id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)registerPowerSpectrumForStreamToken:(long long)arg1;
- (void)unregisterPowerSpectrumForStreamToken:(long long)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForNotifications;

@end
