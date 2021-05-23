/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetCustomURLRequest.h>

@class AVAssetCustomURLBridgeForNSURLProtocol;

__attribute__((visibility("hidden")))
@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest

{
    AVAssetCustomURLBridgeForNSURLProtocol *_bridge;
    struct _CFURLConnection *_connection;
    struct __CFError *_error;
}

@property (weak, nonatomic) AVAssetCustomURLBridgeForNSURLProtocol *bridge;
@property (nonatomic) struct _CFURLConnection *connection;

- (void)dealloc;

@end
