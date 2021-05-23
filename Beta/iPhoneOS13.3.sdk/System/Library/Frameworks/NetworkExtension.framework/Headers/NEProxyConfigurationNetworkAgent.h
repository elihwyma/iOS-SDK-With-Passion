/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent

{
    NSData *_agentData;
}

@property (retain) NSData *agentData;

+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)arg1;

- (id)agentDescription;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)arg1;

@end
