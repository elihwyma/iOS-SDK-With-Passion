/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, NSTimer, _MRAVEndpointDescriptorProtobuf, _MROriginProtobuf;

@interface MRAVEndpoint : NSObject

{
    NSMutableArray *_pendingConnectionHandlers;
    NSOperationQueue *_connectionHandlerOperationQueue;
    _Bool _registeredForConnectionStateDidChangeNotifications;
    NSTimer *_connectionTimeoutTimer;
    _Bool _outputDevicesDidChangeNotificationScheduled;
    _Bool _proxyGroupPlayer;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) NSArray *personalOutputDevices;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) unsigned long long logicalOutputDeviceCount;
@property (nonatomic, readonly) MRExternalDevice *externalDevice;
@property (nonatomic, readonly) MRAVOutputDevice *designatedGroupLeader;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer;
@property (nonatomic, readonly) _Bool canModifyGroupMembership;
@property (nonatomic, readonly) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (nonatomic, readonly, getter=isLocalEndpoint) _Bool localEndpoint;
@property (nonatomic, readonly) _MROriginProtobuf *origin;

+ (id)_notificationSerialQueue;
+ (void)_modifyOutputDevices:(id)arg1 inGroup:(id)arg2 queue:(id)arg3 modifyDevices:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_init;
- (_Bool)isVolumeControlAvailable;
- (void)scheduleEndpointOutputDevicesDidChangeNotification;
- (void)connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)outputDevicesMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)migrateToOutputDevice:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_callAllCompletionHandlersWithError:(id)arg1;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_initiatorStringWithInitiator:(id)arg1 uid:(id)arg2;
- (void)migrateToLogicalOutputDevice:(id)arg1 request:(id)arg2 initiator:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)migrateToEndpoint:(id)arg1 request:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareToMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)migrateToOrAddOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)migrateToOrSetOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canMigrateToEndpoint:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)outputDeviceUIDsMatchingPredicate:(CDUnknownBlockType)arg1;
- (_Bool)effectivelyEqual:(id)arg1;

@end
