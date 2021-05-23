/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceAuthorizationSessionInternal;

@protocol AVOutputDeviceAuthorizationSessionDelegate;

@interface AVOutputDeviceAuthorizationSession : NSObject

{
    AVOutputDeviceAuthorizationSessionInternal *_ivars;
}

@property (weak) id <AVOutputDeviceAuthorizationSessionDelegate> delegate;

+ (void)initialize;
+ (id)sharedAuthorizationSession;
+ (id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent *)arg1;

- (void)dealloc;
- (id)impl;
- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1;
- (void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2;
- (_Bool)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;

@end
