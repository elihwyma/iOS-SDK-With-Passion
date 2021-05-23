/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/Swift-Protocol.h>

@class AVOutputDevice, NSString;

@protocol AVOutputDeviceAuthorizationRequestImpl <Swift>

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (nonatomic, readonly) NSString *authorizationTokenType;

- (unsigned short)cancel;
- (unsigned short)respondWithAuthorizationToken:completionHandler: /* Error: Ran out of types for this method. */;

@end
