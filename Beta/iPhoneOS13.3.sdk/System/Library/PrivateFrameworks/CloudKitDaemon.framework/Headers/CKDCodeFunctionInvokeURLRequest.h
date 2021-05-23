/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest

{
    CDUnknownBlockType _serializedResultsCallback;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSData *_attestationEntropy;
    NSArray *_pccWrappedInvocationKeys;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *pccWrappedInvocationKeys;
@property (copy, nonatomic) CDUnknownBlockType serializedResultsCallback;

- (int)operationType;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (_Bool)allowsAnonymousAccount;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 attestationEntropy:(id)arg4 pccWrappedInvocationKeys:(id)arg5;

@end
