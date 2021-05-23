/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVConcreteEndpoint.h>

@class MRAVOutputContext, MROutputContextController, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVOutputContext *_outputContext;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MROutputContextController *_outputContextController;
}

@property (copy, nonatomic) NSArray *outputDevices;

+ (_Bool)supportsSecureCoding;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (id)origin;
- (void)_registerForNotifications;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (_Bool)isProxyGroupPlayer;
- (id)initWithOutputDevices:(id)arg1;
- (_Bool)canModifyGroupMembership;
- (id)initWithOutputContext:(id)arg1;
- (void)_reloadOutputDevicesFromContext;
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;
- (id)personalOutputDevices;
- (void)connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_ouputDevicesForOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
