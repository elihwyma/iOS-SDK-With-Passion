/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSData, NSDictionary, NSString, NSURL;

@protocol GEORequestCounterTicket, OS_xpc_object;

@interface GEODataRequest : NSObject

{
    NSURL *_URL;
    NSObject<OS_xpc_object> *_xpcRequest;
    GEOApplicationAuditToken *_auditToken;
    NSDictionary *_additionalHTTPHeaders;
    NSData *_bodyData;
    NSData *_cachedData;
    id <GEORequestCounterTicket> _requestCounterTicket;
    NSString *_backgroundSessionIdentifier;
    GEODataRequestThrottlerToken *_throttleToken;
    double _timeoutInterval;
    CDStruct_d1a7ebee _kind;
    unsigned long long _multipathServiceType;
    unsigned long long _multipathAlternatePort;
    _Bool _needsProxy;
    _Bool _HTTPShouldHandleCookies;
    unsigned long long _constraints;
    _Bool _allowTLSSessionTicketUse;
    _Bool _allowTFOUse;
    BOOL _HTTPMethod;
}

@property (copy, nonatomic) NSData *cachedData;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcRequest;
@property (copy, nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (copy, nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSDictionary *additionalHTTPHeaders;
@property (nonatomic, readonly) _Bool needsProxy;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) BOOL HTTPMethod;
@property (nonatomic, readonly) CDStruct_d1a7ebee kind;
@property (nonatomic, readonly) _Bool HTTPShouldHandleCookies;
@property (nonatomic, readonly) unsigned long long constraints;
@property (nonatomic, readonly) _Bool allowTLSSessionTicketUse;
@property (nonatomic, readonly) _Bool allowTFOUse;
@property (nonatomic, readonly) id <GEORequestCounterTicket> requestCounterTicket;
@property (nonatomic, readonly) unsigned long long multipathServiceType;
@property (nonatomic, readonly) unsigned long long multipathAlternatePort;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;

- (id)init;
- (id)description;
- (id)initWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(_Bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(_Bool)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(_Bool)arg12 allowTFOUse:(_Bool)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 backgroundSessionIdentifier:(id)arg20 throttleToken:(id)arg21;
- (id)publicLogDescription;
- (id)initWithKind:(CDStruct_d1a7ebee)arg1 URL:(id)arg2 xpcRequest:(id)arg3 auditToken:(id)arg4 timeoutInterval:(double)arg5 additionalHTTPHeaders:(id)arg6 needsProxy:(_Bool)arg7 HTTPMethod:(BOOL)arg8 bodyData:(id)arg9 HTTPShouldHandleCookies:(_Bool)arg10 constraints:(unsigned long long)arg11 allowTLSSessionTicketUse:(_Bool)arg12 allowTFOUse:(_Bool)arg13 userAgent:(id)arg14 entityTag:(id)arg15 cachedData:(id)arg16 requestCounterTicket:(id)arg17 multipathServiceType:(unsigned long long)arg18 multipathAlternatePort:(unsigned long long)arg19 throttleToken:(id)arg20;
- (id)newURLRequest;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (id)initWithKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(_Bool)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)initHttpOnlyRequestWithKind:(CDStruct_d1a7ebee)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(_Bool)arg5 allowCellularUse:(_Bool)arg6 compressRequest:(_Bool)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11;
- (id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(_Bool)arg3 backgroundIdentifier:(id)arg4 compressRequest:(_Bool)arg5 allowCellular:(_Bool)arg6 allowBattery:(_Bool)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10;

@end
