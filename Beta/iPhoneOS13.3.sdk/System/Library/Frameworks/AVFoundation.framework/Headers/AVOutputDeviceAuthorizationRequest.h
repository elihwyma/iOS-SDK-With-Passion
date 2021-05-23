/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDevice, AVOutputDeviceAuthorizationRequestInternal, NSError, NSString;

@interface AVOutputDeviceAuthorizationRequest : NSObject

{
    AVOutputDeviceAuthorizationRequestInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (nonatomic, readonly) NSString *authorizationTokenType;

- (void)dealloc;
- (id)description;
- (void)cancel;
- (id)impl;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1;

@end
