/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSString, NSUUID, NWNetworkAgentRegistration;

__attribute__((visibility("hidden")))
@interface VCNetworkAgentCell

{
    NSUUID *_agentUUID;
    NSString *_agentDescription;
    _Bool _active;
    _Bool _voluntary;
    int _assertionRefCount;
    NWNetworkAgentRegistration *_agentRegistration;
    NSString *_wifiInterfaceName;
    _Bool kernelActivated;
    _Bool userActivated;
}

@property (readonly) _Bool cellularAssertionActive;
@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property (nonatomic, getter=isUserActivated) _Bool userActivated;
@property (nonatomic, getter=isVoluntary) _Bool voluntary;
@property (nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property (nonatomic, getter=isNetworkProvider) _Bool networkProvider;
@property (nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property (nonatomic) _Bool supportsBrowseRequests;
@property (nonatomic) _Bool supportsResolveRequests;
@property (nonatomic) _Bool requiresAssert;
@property (nonatomic) _Bool updateClientsImmediately;

+ (id)sharedInstance;
+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyAgentData;
- (void)addCellularAssertion;
- (void)removeCellularAssertion;
- (id)queryWifiInterfaceName;

@end
