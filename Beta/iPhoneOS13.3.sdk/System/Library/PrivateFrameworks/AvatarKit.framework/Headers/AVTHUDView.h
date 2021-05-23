/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UILabel;

@interface AVTHUDView : UIView

{
    UILabel *_totalLatencyLabel;
    UILabel *_arKitLatencyLabel;
    UILabel *_updateSyncLatencyLabel;
    UILabel *_metalLatencyLabel;
    UILabel *_fpsLabel;
    UILabel *_audioTimeLabel;
    UILabel *_timeBetweenARFrameLabel;
    UILabel *_droppedFrameLabel;
    UILabel *_shaderCompilationLabel;
    CDStruct_53ba08a1 _lastFrameData;
    CALayer *_arKitLatencyBar;
    CALayer *_updateLatencyBar;
    CALayer *_metalLatencyBar;
    NSMutableArray *_totalLatencyGraphLayers;
    int _selectedGraphIndex;
}

- (id)_label;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_tapAction:(id)arg1;
- (void)updateWithData:(CDStruct_53ba08a1)arg1;
- (void)_loadSubviews;
- (void)_updateLatencyBar:(CDStruct_53ba08a1 *)arg1;
- (void)_updateLatencyGraph:(CDStruct_53ba08a1 *)arg1;

@end
