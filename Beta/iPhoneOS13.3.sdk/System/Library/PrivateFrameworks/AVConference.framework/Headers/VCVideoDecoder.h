/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoDecoder : NSObject

{
    long long _streamToken;
    struct tagHANDLE *_videoPlayerHandle;
    int _clientCount;
}

@property (readonly) struct tagHANDLE *videoPlayerHandle;

+ (id)streamTokenDecoderMap;
+ (id)decoderForStreamToken:(long long)arg1 withConfig:(struct tagVideoDecoderConfig *)arg2;
+ (void)releaseVideoDecoderForStreamToken:(long long)arg1;

- (void)dealloc;
- (id)initWithConfig:(struct tagVideoDecoderConfig *)arg1;

@end
