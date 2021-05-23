/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface NENetworkAgent : NSObject

{
    _Bool active;
    _Bool kernelActivated;
    _Bool userActivated;
    _Bool voluntary;
    int _internalSessionType;
    int _lastStatus;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSUUID *_internalUUID;
    NSString *_name;
    CDUnknownBlockType _internalStartHandler;
    NSString *_configurationName;
}

@property (copy) NSUUID *internalUUID;
@property int internalSessionType;
@property (retain) NSString *name;
@property (copy) CDUnknownBlockType internalStartHandler;
@property (copy, readonly) NSUUID *configurationUUID;
@property (copy) NSString *configurationName;
@property (readonly) int sessionType;
@property int lastStatus;
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

- (void)setStartHandler:(CDUnknownBlockType)arg1;
- (id)copyAgentData;
- (_Bool)startAgentWithOptions:(id)arg1;
- (id)initWithConfigUUID:(id)arg1 sessionType:(int)arg2 name:(id)arg3;
- (_Bool)matchesFileHandle:(id)arg1;

@end
