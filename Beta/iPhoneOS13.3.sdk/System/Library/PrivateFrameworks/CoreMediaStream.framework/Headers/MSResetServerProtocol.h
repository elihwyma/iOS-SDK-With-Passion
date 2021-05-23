/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSResetServerProtocol : MSStreamsProtocol

{
    struct __MSRSPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    } _context;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)abort;
- (void)resetServerState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (void)_coreProtocolDidFinishError:(id)arg1;

@end
