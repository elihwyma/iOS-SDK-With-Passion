/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVEndpoint.h>

@class MRAVOutputDevice, MRTransportExternalDevice, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MRAVConcreteEndpoint : MRAVEndpoint

{
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRTransportExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) MRTransportExternalDevice *externalDevice;

- (void)dealloc;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (_Bool)isProxyGroupPlayer;
- (_Bool)canModifyGroupMembership;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;
- (id)designatedGroupLeader;

@end
