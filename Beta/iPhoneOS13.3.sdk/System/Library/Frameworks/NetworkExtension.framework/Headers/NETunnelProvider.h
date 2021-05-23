/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEProvider.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider

{
    _Bool _reasserting;
    _Bool _onDemandEnabled;
    NEVPNProtocol *_protocolConfiguration;
    NSArray *_appRules;
}

@property (retain) NEVPNProtocol *protocolConfiguration;
@property _Bool onDemandEnabled;
@property (retain) NSArray *appRules;
@property (readonly) long long routingMethod;
@property _Bool reasserting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
