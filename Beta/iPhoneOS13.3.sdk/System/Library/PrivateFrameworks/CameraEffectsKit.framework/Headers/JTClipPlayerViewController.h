/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTClipSequenceDisplayViewController.h>

@class JTClip, JTCompositionClipDataSource, UIView, UIViewController;

@protocol JTAVPlayerViewer;

@interface JTClipPlayerViewController : JTClipSequenceDisplayViewController

{
    _Bool _disableProjectBackgroundAudio;
    JTClip *_clip;
    UIView *_playerContainerView;
    UIView *_placeholderContainerView;
    UIViewController<JTAVPlayerViewer> *_avPlayerView;
    JTCompositionClipDataSource *_clipDataSource;
}

@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *placeholderContainerView;
@property (weak, nonatomic) UIViewController<JTAVPlayerViewer> *avPlayerView;
@property (retain, nonatomic) JTCompositionClipDataSource *clipDataSource;
@property (retain, nonatomic) JTClip *clip;
@property (nonatomic) _Bool disableProjectBackgroundAudio;

- (void)viewWillAppear:(_Bool)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)updateCompositionForEffectChange;
- (void)setDontRenderLiveTitles:(_Bool)arg1;
- (void)setDuckAllAudioClips:(_Bool)arg1;
- (void)reloadClip;
- (void)reloadClipAndSeekToStart:(_Bool)arg1;
- (id)playerViewer;

@end
