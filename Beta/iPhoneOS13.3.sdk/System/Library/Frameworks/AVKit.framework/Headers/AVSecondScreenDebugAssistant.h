/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVObservationController, AVPlayer, AVSecondScreenViewController, CADisplay, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface AVSecondScreenDebugAssistant : NSObject

{
    AVPlayer *_player;
    UIScene *_scene;
    NSString *_debugText;
    AVSecondScreenViewController *_secondScreenViewController;
    CADisplay *_debugInfoDisplay;
    AVObservationController *_observationController;
}

@property (retain, nonatomic) CADisplay *debugInfoDisplay;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) UIScene *scene;
@property (copy, nonatomic) NSString *debugText;
@property (weak, nonatomic) AVSecondScreenViewController *secondScreenViewController;

- (id)init;
- (void)dealloc;
- (id)_currentEnabledVideoTrack;
- (id)_currentDisplay;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg1 currentVideoDynamicRange:(id)arg2;

@end
