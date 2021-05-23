/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVEndpoint.h>

@class MRAVDistantOutputDevice, MRDistantExternalDevice, NSArray, NSObject, NSString, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint

{
    _Bool _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_externalDeviceQueue;
    NSArray *_distantOutputDevices;
    NSArray *_distantPersonalOutputDevices;
    MRAVDistantOutputDevice *_distantGroupLeader;
    MRDistantExternalDevice *_distantExternalDevice;
    NSXPCListenerEndpoint *_externalDeviceListenerEndpoint;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (void)setUniqueIdentifier:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (id)outputDevices;
- (id)externalDevice;
- (_Bool)isProxyGroupPlayer;
- (_Bool)canModifyGroupMembership;
- (id)personalOutputDevices;
- (id)designatedGroupLeader;

@end
