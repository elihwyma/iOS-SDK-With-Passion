//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
// - (void).cxx_destruct;
- (BOOL)canModifyGroupMembership;
- (BOOL)isProxyGroupPlayer;
@property(retain, nonatomic) MRTransportExternalDevice *externalDevice;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)uniqueIdentifier;
- (long long)connectionType;
- (id)designatedGroupLeader;
- (void)dealloc;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2;

@end

