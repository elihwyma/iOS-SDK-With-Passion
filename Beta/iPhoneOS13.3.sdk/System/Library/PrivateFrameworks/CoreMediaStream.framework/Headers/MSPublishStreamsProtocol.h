/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol

{
    struct __MSPSPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
        CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
    } _context;
    NSArray *_assetCollectionsInFlight;
    struct __MSPSPCUCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    } _UCContext;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)_missingAssetFieldErrorWithFieldName:(id)arg1;
- (_Bool)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id *)arg3;
- (void)_resetConnectionVariables;
- (id)_metadataDictForAsset:(id)arg1 outError:(id *)arg2;
- (id)_metadataDictForAssetCollection:(id)arg1 outError:(id *)arg2;
- (void)sendMetadataForAssetCollections:(id)arg1;
- (void)sendUploadCompleteForAssetCollections:(id)arg1;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2;

@end
