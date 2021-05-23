/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEProvider.h>

@class NSArray;

@interface NEDNSProxyProvider : NEProvider

{
    NSArray *_systemDNSSettings;
}

@property (retain) NSArray *systemDNSSettings;

- (_Bool)handleNewFlow:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelProxyWithError:(id)arg1;
- (_Bool)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2;

@end
