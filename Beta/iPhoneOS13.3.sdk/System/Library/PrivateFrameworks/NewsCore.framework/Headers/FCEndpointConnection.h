/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAsyncSerialQueue, NSString, NSURL, NSURLSession;

@protocol FCCoreConfigurationManager;

@interface FCEndpointConnection : NSObject

{
    id <FCCoreConfigurationManager> _configurationManager;
    NSURLSession *_session;
    NSURL *_baseURL;
    FCAsyncSerialQueue *_requestSerialQueue;
}

@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) NSURLSession *session;
@property (copy) NSURL *baseURL;
@property (nonatomic, readonly) FCAsyncSerialQueue *requestSerialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_CAPIBaseURLStringFromConfiguration:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;
+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;

- (id)initWithConfigurationManager:(id)arg1;
- (id)initWithConfigurationManager:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(_Bool)arg7 callbackQueue:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(_Bool)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;

@end
