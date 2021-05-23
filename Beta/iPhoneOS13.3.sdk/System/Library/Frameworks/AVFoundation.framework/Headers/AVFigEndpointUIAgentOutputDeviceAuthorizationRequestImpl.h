/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl, AVOutputDevice, NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject

{
    AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *_parentSession;
    NSString *_uniqueID;
    AVOutputDevice *_outputDevice;
    NSString *_tokenType;
    CDUnknownBlockType _completionHandler;
}

@property (weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *parentAuthorizationSessionImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (nonatomic, readonly) NSString *authorizationTokenType;

- (void)dealloc;
- (void)cancel;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3;
- (void)enterTerminalStatus:(long long)arg1 error:(id)arg2;

@end
