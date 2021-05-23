/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOPeer, NSDictionary, NSProgress, NSString;

@protocol OS_xpc_object;

@interface GEOMessage : NSObject

{
    NSObject<OS_xpc_object> *_xpcMessage;
    NSString *_messageName;
    NSDictionary *_userInfo;
    GEOPeer *_peer;
    NSProgress *_progressToMirrorOverXPC;
    GEOApplicationAuditToken *_preferredAuditToken;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) GEOPeer *peer;
@property (nonatomic, readonly) GEOApplicationAuditToken *preferredAuditToken;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;

- (void)sendReply:(id)arg1;
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;
- (void)sendReplyWithXPCUserInfo:(id)arg1;

@end
