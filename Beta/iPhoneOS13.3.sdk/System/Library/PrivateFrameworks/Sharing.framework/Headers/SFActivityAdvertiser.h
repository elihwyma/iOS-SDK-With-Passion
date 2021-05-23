/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFXPCClient.h>

@class NSString;

@protocol SFActivityAdvertiserDelegate;

@interface SFActivityAdvertiser : SFXPCClient

{
    id <SFActivityAdvertiserDelegate> _delegate;
}

@property id <SFActivityAdvertiserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedAdvertiser;

- (id)init;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)pairedDevicesChanged:(id)arg1;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;

@end
