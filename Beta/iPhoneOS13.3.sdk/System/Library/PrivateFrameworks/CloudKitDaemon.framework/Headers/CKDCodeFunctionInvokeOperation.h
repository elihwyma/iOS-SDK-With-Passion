/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDProtocolTranslator, NSArray, NSData, NSString, NSURL, PCCKey;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation

{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _replaceLocalSerializationsBlobs;
    CDUnknownBlockType _initialResponseReceivedCallback;
    CDUnknownBlockType _replaceWireSerializations;
    CDUnknownBlockType _recordFetchCompletionBlock;
    CDUnknownBlockType _recordFetchProgressBlock;
    CDUnknownBlockType _recordFetchCommandBlock;
    NSString *_serviceName;
    NSString *_functionName;
    PCCKey *_pccKey;
    NSArray *_pccWrappedKeys;
    NSData *_attestationEntropy;
    NSArray *_requestLocalSerializations;
    NSArray *_requestLocalEnvelopes;
    NSData *_permittedRemoteMeasurement;
    NSURL *_explicitBaseURL;
    NSArray *_requestRecords;
    NSArray *_requestEnvelopes;
    NSData *_serializedArguments;
    NSData *_serializedResponse;
    NSArray *_responseRecords;
    CKDProtocolTranslator *_translator;
}

@property (copy, nonatomic, readonly) NSString *serviceName;
@property (copy, nonatomic, readonly) NSString *functionName;
@property (retain, nonatomic) PCCKey *pccKey;
@property (retain, nonatomic) NSArray *pccWrappedKeys;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (copy, nonatomic) NSURL *explicitBaseURL;
@property (nonatomic) _Bool local;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSArray *requestRecords;
@property (copy, nonatomic) NSArray *requestEnvelopes;
@property (copy, nonatomic) NSData *serializedArguments;
@property (copy, nonatomic) NSData *serializedResponse;
@property (copy, nonatomic) NSArray *responseRecords;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (copy, nonatomic) CDUnknownBlockType replaceLocalSerializationsBlobs;
@property (copy, nonatomic) CDUnknownBlockType initialResponseReceivedCallback;
@property (copy, nonatomic) CDUnknownBlockType replaceWireSerializations;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType recordFetchCommandBlock;

+ (long long)isPredominatelyDownload;

- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_preflightRecords;
- (void)_getSerializedRequest;
- (void)_invokeLocalFunction;
- (void)_invokeFunction;
- (void)_getDeserializedRecords;
- (void)_postflightRecords;

@end
