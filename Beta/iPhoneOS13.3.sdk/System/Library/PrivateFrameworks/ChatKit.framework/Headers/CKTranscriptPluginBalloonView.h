/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKInteractiveBalloonImageView, IMBalloonPluginDataSource, NSString, UIView, UIViewController;

@protocol CKTranscriptPluginView;

@interface CKTranscriptPluginBalloonView : CKBalloonView

{
    _Bool _isInteractive;
    _Bool _mayReparentPluginViews;
    _Bool _suppressMask;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    UIViewController *_pluginViewController;
    UIView<CKTranscriptPluginView> *_pluginView;
    IMBalloonPluginDataSource *_dataSource;
    UIView *_pluginSnapshotViewForThrowAnimation;
    CKInteractiveBalloonImageView *_tailMask;
    CKBalloonImageView *_outlineMask;
    UIView *_pluginSnapshotView;
}

@property (retain, nonatomic) CKInteractiveBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (retain, nonatomic) UIView *pluginSnapshotView;
@property (nonatomic) _Bool suppressMask;
@property (weak, nonatomic) UIViewController *pluginViewController;
@property (retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (nonatomic) _Bool isInteractive;
@property (retain, nonatomic) UIView *pluginSnapshotViewForThrowAnimation;
@property (nonatomic, readonly) struct CGRect maskFrame;
@property (nonatomic, readonly) _Bool shouldMaskWhenOpaque;
@property (nonatomic) _Bool mayReparentPluginViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)userInterfaceStyle;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)userInterfaceLevel;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)setUserInterfaceLevel:(long long)arg1;
- (id)overlayColor;
- (id)imageForInvisibleInkEffectView;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (void)updateBalloonMasks;
- (void)_pluginViewReadyForSnapshot:(id)arg1;
- (void)pluginViewRequestsPresentationAction:(id)arg1;

@end
