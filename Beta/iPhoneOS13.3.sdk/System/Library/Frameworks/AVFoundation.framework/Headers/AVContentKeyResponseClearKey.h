/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVContentKeyResponse.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseClearKey : AVContentKeyResponse

{
    NSData *_keyData;
    NSData *_initializationVector;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 initializationVector:(id)arg2;

@end
