/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol

{
    struct __MSRPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    } _context;
    NSArray *_assetsInFlight;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)requestReauthorizationForAssets:(id)arg1;

@end
