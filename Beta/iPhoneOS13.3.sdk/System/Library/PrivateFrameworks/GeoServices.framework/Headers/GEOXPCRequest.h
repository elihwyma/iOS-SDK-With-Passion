/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, GEOPeer, NSError, NSProgress, NSString;

@protocol OS_xpc_object;

@interface GEOXPCRequest : NSObject <Swift>

{
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
    NSString *_service;
    NSString *_method;
    GEOPeer *_peer;
    GEOMapServiceTraits *_traits;
    GEOApplicationAuditToken *_auditToken;
    GEODataRequestThrottlerToken *_throttleToken;
    NSProgress *_progressToMirrorOverXPC;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) GEOPeer *peer;
@property (retain, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *replyDictionary;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;

+ (_Bool)supportsSecureCoding;
+ (_Bool)reportsProgress;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)send:(id)arg1;
- (id)_prepareRequest;
- (id)_createConnectionWithQueue:(id)arg1;
- (id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4;
- (void)send:(id)arg1 withReply:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)sendSync:(id)arg1 error:(id *)arg2;

@end
