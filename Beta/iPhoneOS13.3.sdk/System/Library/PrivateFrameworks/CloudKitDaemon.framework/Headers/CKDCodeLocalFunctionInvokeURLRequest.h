/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

{
    CDUnknownBlockType _serializedResultsCallback;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSURL *_explicitBaseURL;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *explicitBaseURL;
@property (copy, nonatomic) CDUnknownBlockType serializedResultsCallback;

- (id)url;
- (long long)partitionType;
- (id)additionalHeaderValues;
- (_Bool)requestGETPreAuth;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (Class)expectedResponseClass;
- (_Bool)parsingStandaloneMessage;
- (long long)serverType;
- (_Bool)shouldCompressBody;
- (_Bool)allowsAnonymousAccount;
- (Class)requestMessageClass;
- (id)requestBodyStream;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 explicitBaseURL:(id)arg4;

@end
