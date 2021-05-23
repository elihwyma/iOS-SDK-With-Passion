/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, NWNetworkAgentRegistration;

@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject

{
    _Bool active;
    _Bool supportsBrowseRequests;
    _Bool nexusProvider;
    unsigned int _frameType;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

@property (retain) NWNetworkAgentRegistration *registration;
@property unsigned int frameType;
@property (weak) NSObject<NENexusAgentDelegate> *delegate;
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

+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)arg1;

- (id)copyAgentData;
- (void)unassertAgentWithOptions:(id)arg1;
- (_Bool)assertAgentWithOptions:(id)arg1;
- (_Bool)startAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (_Bool)requestNexusWithOptions:(id)arg1;

@end
