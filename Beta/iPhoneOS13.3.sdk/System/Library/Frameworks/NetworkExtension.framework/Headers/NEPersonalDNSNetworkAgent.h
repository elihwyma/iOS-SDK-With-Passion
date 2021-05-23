/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENetworkAgent.h>

@class NSArray;

@interface NEPersonalDNSNetworkAgent : NENetworkAgent

{
    NSArray *_settings;
}

@property (retain) NSArray *settings;

+ (id)agentType;
+ (id)agentFromData:(id)arg1;

- (id)copyAgentData;

@end
