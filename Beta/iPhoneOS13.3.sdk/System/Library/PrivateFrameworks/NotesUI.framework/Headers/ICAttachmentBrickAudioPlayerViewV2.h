/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICAudioPlayPauseView.h>

@class ICArcLayer, ICCircleLayer;

@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView

{
    id <ICAttachmentBrickAudioPlayerViewV2Delegate> _delegate;
    ICCircleLayer *_progressGrooveLayer;
    ICArcLayer *_progressCircleLayer;
}

@property (retain, nonatomic) ICCircleLayer *progressGrooveLayer;
@property (retain, nonatomic) ICArcLayer *progressCircleLayer;
@property (nonatomic) id <ICAttachmentBrickAudioPlayerViewV2Delegate> delegate;

- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)tintColor;
- (void)didMoveToWindow;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (void)sharedInit;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (id)addSubImageViewForImage:(id)arg1;
- (void)showPressed:(_Bool)arg1;
- (void)createProgressLayers;
- (struct UIColor *)backgroundNormalColor;
- (struct UIColor *)backgroundPressedColor;
- (void)showDisabled:(_Bool)arg1;

@end
