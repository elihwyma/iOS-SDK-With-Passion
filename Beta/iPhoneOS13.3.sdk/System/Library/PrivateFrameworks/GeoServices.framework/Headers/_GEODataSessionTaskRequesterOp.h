/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, GEOProtobufSessionTask, NSString, PBRequest;

@protocol GEOServiceRequestConfiguring;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRequesterOp : NSObject

{
    GEOProtobufSessionTask *_task;
    _Bool _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _validationHandler;
    id <GEOServiceRequestConfiguring> _config;
    NSString *_appIdentifier;
    GEOApplicationAuditToken *_auditToken;
    CDStruct_d1a7ebee _dataRequestKind;
    GEOMapServiceTraits *_traits;
    double _timeout;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)_cleanup;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)protobufSession:(id)arg1 validateResponse:(id)arg2;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(CDStruct_d1a7ebee)arg5 traits:(id)arg6 throttleToken:(id)arg7;
- (void)startWithValidationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_fullURL;
- (id)_userInfoForTask:(id)arg1;

@end
