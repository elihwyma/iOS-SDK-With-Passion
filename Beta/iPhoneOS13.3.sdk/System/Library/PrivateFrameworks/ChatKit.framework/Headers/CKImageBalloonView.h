/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonView.h>

@class CKAnimatedImage, CKBalloonImageView, NSArray, NSString, UIImageView;

@interface CKImageBalloonView : CKBalloonView

{
    _Bool _suppressMask;
    _Bool _isIrisAsset;
    CKAnimatedImage *_animatedImage;
    CKBalloonImageView *_tailMask;
    CKBalloonImageView *_outlineMask;
    UIImageView *_irisBadgeView;
    NSArray *_frames;
    unsigned long long _animationFrameOffset;
}

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (nonatomic) unsigned long long animationFrameOffset;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) CKBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (nonatomic) _Bool suppressMask;
@property (nonatomic) _Bool isIrisAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)prepareForDisplay;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)updateAnimationTimerObserving;
- (void)setHasTail:(_Bool)arg1;
- (id)overlayColor;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasResumed;
- (id)imageForInvisibleInkEffectView;
- (_Bool)needsGroupOpacity;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (void)configureForMessagePart:(id)arg1;

@end
