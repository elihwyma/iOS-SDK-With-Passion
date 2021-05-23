/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject

{
    AVContentKeyResponseInternal *_keyResponse;
}

+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2;
+ (id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2;
+ (id)contentKeyResponseWithAuthorizationTokenData:(id)arg1;

- (void)dealloc;
- (id)keySystem;
- (id)initWithKeySystem:(id)arg1;

@end
