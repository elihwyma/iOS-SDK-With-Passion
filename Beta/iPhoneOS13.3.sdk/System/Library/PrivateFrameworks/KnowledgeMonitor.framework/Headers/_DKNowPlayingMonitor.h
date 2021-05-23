/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class AVOutputContext;

@interface _DKNowPlayingMonitor : _DKMonitor

{
    unsigned int _lastPlaybackState;
    AVOutputContext *_outputContext;
}

@property (nonatomic) unsigned int lastPlaybackState;
@property (retain, nonatomic) AVOutputContext *outputContext;

+ (id)entitlements;
+ (id)eventStream;
+ (_Bool)shouldMergeUnchangedEvents;
+ (CDUnknownBlockType)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2;
+ (void)setPlaybackState:(unsigned int)arg1 bundleId:(id)arg2 track:(id)arg3 outputDeviceIDs:(id)arg4;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)_registerForNowPlayingNotifications;
- (void)outputDevicesDidChange:(id)arg1;
- (void)_nowPlayingInfoDidChange:(void *)arg1 outputDevices:(id)arg2;
- (id)_metadataFromInfo:(id)arg1 outputDevices:(id)arg2;

@end
