/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class ACCTransportClient, NSString;

@interface ACCTransportClientBridge : NSObject

{
    ACCTransportClient *_transportClient;
    CDUnknownBlockType _connectionAuthStatusChangedHandler;
    CDUnknownBlockType _connectionPropertiesChangedHandler;
    CDUnknownBlockType _endpointPropertiesChangedHandler;
}

@property (retain, nonatomic) ACCTransportClient *transportClient;
@property (copy, nonatomic) CDUnknownBlockType connectionAuthStatusChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionPropertiesChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointPropertiesChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedBridge;

- (id)init;
- (void)transportClient:(id)arg1 authStatusDidChange:(_Bool)arg2 forConnectionWithUUID:(id)arg3;
- (void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4;
- (void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5;

@end
