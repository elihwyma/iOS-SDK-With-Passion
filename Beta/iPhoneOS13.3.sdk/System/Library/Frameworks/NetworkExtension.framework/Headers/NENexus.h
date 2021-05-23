/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NENexusAgent, NENexusFlowManager, NEPolicySession, NSArray, NSMutableDictionary, NSString;

@protocol NENexusDelegate, OS_nw_nexus;

@interface NENexus : NSObject

{
    _Bool _asserted;
    unsigned long long _level;
    NSString *_name;
    unsigned long long _availability;
    NSArray *_localAddresses;
    NSArray *_dnsServerAddresses;
    unsigned long long _maximumTransmissionUnit;
    NSObject<OS_nw_nexus> *_userNexus;
    NSMutableDictionary *_userNexusInstances;
    NSMutableDictionary *_userNexusClientCount;
    NSMutableDictionary *_userNexusClientFlows;
    NSMutableDictionary *_assertions;
    struct NEVirtualInterface_s *_virtualInterface;
    NENexusFlowManager *_flowManager;
    NEPolicySession *_policySession;
    NENexusAgent *_agent;
    NSObject<NENexusDelegate> *_delegate;
    NSMutableDictionary *_kernelNexusClientFlows;
}

@property (retain) NSObject<OS_nw_nexus> *userNexus;
@property (retain) NSMutableDictionary *userNexusInstances;
@property (retain) NSMutableDictionary *userNexusClientCount;
@property (retain) NSMutableDictionary *userNexusClientFlows;
@property (retain) NSMutableDictionary *assertions;
@property (getter=isAsserted) _Bool asserted;
@property struct NEVirtualInterface_s *virtualInterface;
@property (retain) NENexusFlowManager *flowManager;
@property (retain) NEPolicySession *policySession;
@property (retain) NENexusAgent *agent;
@property (weak) NSObject<NENexusDelegate> *delegate;
@property (retain) NSMutableDictionary *kernelNexusClientFlows;
@property (readonly) unsigned long long level;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic) unsigned long long availability;
@property (retain, nonatomic) NSArray *localAddresses;
@property (retain, nonatomic) NSArray *dnsServerAddresses;
@property (nonatomic) unsigned long long maximumTransmissionUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned int)arg5;
- (void)handleAssertFromClient:(id)arg1;
- (void)handleUnassertFromClient:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (void)connectNewFlow:(id)arg1;
- (void)disconnectFlow:(id)arg1;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4 channelCount:(unsigned int)arg5 netifRingSize:(unsigned int)arg6 kernelPipeTxRingSize:(unsigned int)arg7 kernelPipeRxRingSize:(unsigned int)arg8;
- (_Bool)handleRequestNexusFromClient:(id)arg1;
- (void)closeFlowWithClientIdentifier:(id)arg1;
- (void)handleStartFromClient:(id)arg1;
- (_Bool)setupFlowManager;
- (_Bool)setupPolicySession;
- (void)rejectFlowWithClientIdentifier:(id)arg1;

@end
