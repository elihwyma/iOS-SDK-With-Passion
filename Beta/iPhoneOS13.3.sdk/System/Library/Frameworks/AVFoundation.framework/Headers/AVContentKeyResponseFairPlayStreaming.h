/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVContentKeyResponse.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseFairPlayStreaming : AVContentKeyResponse

{
    NSData *_keyData;
    NSDate *_renewalDate;
}

- (void)dealloc;
- (id)initWithKeyData:(id)arg1 renewalDate:(id)arg2;

@end
