/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CALayer.h>

@class AVPlayerController, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerLayer : CALayer

{
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<CALayer> _videoSublayer;
    struct RetainPtr<NSString> _videoGravity;
    _Bool _readyForDisplay;
    NSDictionary *_pixelBufferAttributes;
    struct CGSize _videoDimensions;
    struct CGRect _modelVideoLayerFrame;
}

@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property (nonatomic) struct VideoFullscreenInterfaceAVKit *fullscreenInterface;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) CALayer *videoSublayer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property struct CGSize videoDimensions;
@property struct CGRect modelVideoLayerFrame;

+ (id)keyPathsForValuesAffectingVideoRect;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)layoutSublayers;
- (void)resolveBounds;
- (struct CGRect)videoRect;

@end
