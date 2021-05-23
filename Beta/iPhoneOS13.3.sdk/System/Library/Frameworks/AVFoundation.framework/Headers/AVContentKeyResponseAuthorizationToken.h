/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVContentKeyResponse.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseAuthorizationToken : AVContentKeyResponse

{
    NSData *_authorizationTokenData;
}

- (void)dealloc;
- (id)initWithAuthorizationTokenData:(id)arg1;

@end
