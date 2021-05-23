/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSData, NSPAppRule, NSPConfiguration, NSString, NSUUID;

@interface NSPNetworkAgent : NSObject

{
    unsigned char _dataDigest[32];
    _Bool active;
    _Bool kernelActivated;
    _Bool userActivated;
    _Bool voluntary;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSPConfiguration *_configuration;
    NSPAppRule *_appRule;
    NSData *_keybag;
    NSData *_agentData;
}

@property (retain) NSData *agentData;
@property (retain) NSPConfiguration *configuration;
@property (retain) NSPAppRule *appRule;
@property (retain) NSData *keybag;
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

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyAgentData;
- (void)parseAgentData;

@end
