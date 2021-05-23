/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NEIKEv2PacketTunnelProvider, NSString, NWInterface;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NEIKEv2MOBIKE : NSObject <Swift>

{
    _Bool _mobikeInProgress;
    _Bool _mobikePending;
    _Bool _mobikeReasserting;
    _Bool _mobikeEarlyDisconnect;
    NEIKEv2PacketTunnelProvider *_tunnelProvider;
    NSObject<OS_dispatch_source> *_mobikeWaitTimer;
    NSObject<OS_dispatch_queue> *_mobikeQueue;
    NWInterface *_mobikeInterface;
    NWInterface *_mobikeTransportInterface;
    long long _mobikePathStatus;
    unsigned long long _mobikeTries;
    NSString *_mobikeServer;
}

@property (weak) NEIKEv2PacketTunnelProvider *tunnelProvider;
@property (retain) NSObject<OS_dispatch_source> *mobikeWaitTimer;
@property (retain) NSObject<OS_dispatch_queue> *mobikeQueue;
@property (retain) NWInterface *mobikeInterface;
@property (retain) NWInterface *mobikeTransportInterface;
@property long long mobikePathStatus;
@property unsigned long long mobikeTries;
@property (retain) NSString *mobikeServer;
@property _Bool mobikeInProgress;
@property _Bool mobikePending;
@property _Bool mobikeReasserting;
@property _Bool mobikeEarlyDisconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithQueue:(id)arg1 tunnelProvider:(id)arg2;
- (void)initiateMOBIKE:(unsigned long long)arg1 pathStatus:(long long)arg2 serverAddress:(id)arg3 earlyDisconnect:(_Bool)arg4;
- (void)mobikeStopWaitTimer;
- (void)mobikeReassert;
- (void)mobikeStartWaitTimer;
- (void)mobikeDisconnect;
- (_Bool)startMOBIKE:(id)arg1;
- (_Bool)mobikeReadyCheck:(unsigned long long)arg1 pathStatus:(long long)arg2 mobikeServer:(id)arg3;

@end
