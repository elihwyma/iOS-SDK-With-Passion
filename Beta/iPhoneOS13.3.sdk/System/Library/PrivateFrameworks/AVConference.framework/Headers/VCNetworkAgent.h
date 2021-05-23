/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject

{
    int _assertionRefCount;
    _Bool active;
    _Bool kernelActivated;
    _Bool userActivated;
    _Bool voluntary;
    _Bool specificUseOnly;
    NSString *agentDescription;
    NSUUID *agentUUID;
}

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
- (void)addAssertion;
- (void)removeAssertion;

@end
