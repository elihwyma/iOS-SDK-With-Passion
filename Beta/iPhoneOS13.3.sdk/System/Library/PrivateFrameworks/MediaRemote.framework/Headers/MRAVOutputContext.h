/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class AVOutputContext, MRAVOutputDeviceSourceInfo, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface MRAVOutputContext : NSObject

{
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _isVolumeControlAvailable;
    _Bool _attemptingLogicalDeviceRecovery;
    _Bool _postOutputDeviceChangedScheduled;
    _Bool _postOutputDevicesChangedScheduled;
    _Bool _handleOutputDeviceChangedScheduled;
    _Bool _handleOutputDevicesChangedScheduled;
    _Bool _handleDiscoverySessionOutputDevicesChangedScheduled;
    unsigned int _type;
    NSString *_uniqueIdentifier;
    AVOutputContext *_avOutputContext;
}

@property (copy, nonatomic) NSArray *outputDevices;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVOutputContext *avOutputContext;
@property (nonatomic, readonly) NSArray *outputDevicesSnapshot;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, readonly) _Bool supportsVolumeControl;
@property (nonatomic) float volume;

+ (id)_notificationQueue;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedAudioPresentationContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (void)_initializeAVFNotificationForwarding;
+ (id)_sharedOutputContextFromType:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (id)localDevice;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;
- (void)_reloadOutputDevicesForInitialLoad:(_Bool)arg1;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 password:(id)arg2 initiator:(id)arg3 withCallbackQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1;
- (void)setOutputDevicesSnapshot:(id)arg1;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)attemptLogicalDeviceRecovery;

@end
