/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSString, NSUUID;

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle

{
    NSNumber *_sessionType;
    NSUUID *_configurationIdentifier;
    NSUUID *_agentUUID;
    NSString *_name;
    unsigned long long _agentFlags;
}

@property (readonly) NSNumber *sessionType;
@property (readonly) NSUUID *configurationIdentifier;
@property (readonly) NSUUID *agentUUID;
@property (readonly) NSString *name;
@property unsigned long long agentFlags;

- (id)description;
- (unsigned long long)type;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4 name:(id)arg5;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4;

@end
