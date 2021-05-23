/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumManager : NSObject

{
    NSMutableArray *_meters;
    NSMutableDictionary *_sources;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (nonatomic, readonly) NSMutableArray *meters;
@property (nonatomic, readonly) NSMutableDictionary *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)registerAudioPowerMeterSource:(id)arg1;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1;

@end
