/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVObservationController, AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface AVSecondScreenPlayerLayerView : UIView

{
    AVPlayerLayer *_activeSourcePlayerLayer;
    AVObservationController *_observationController;
}

@property (nonatomic, readonly) AVPlayerLayer *layer;
@property (weak, nonatomic) AVPlayerLayer *activeSourcePlayerLayer;
@property (retain, nonatomic) AVObservationController *observationController;

+ (Class)layerClass;

- (void)dealloc;
- (void)startShowingContentFromSourcePlayerLayer:(id)arg1;
- (void)stopShowingContentFromActiveSourcePlayerLayer;

@end
