/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKNavigationButtonView, UIImageView;

@protocol CKNavigationBarCanvasViewDelegate;

@interface CKNavigationBarCanvasView : UIView

{
    _Bool _enforceLeftItemViewsAlignmentToCenter;
    _Bool _keepTitleViewCentered;
    _Bool _isBusinessChat;
    _Bool _videoEnabled;
    _Bool _audioEnabled;
    _Bool _shouldAnimateAvatarLayoutChanges;
    _Bool _isInEditingMode;
    _Bool _isShowingControls;
    _Bool _multiwayAudioButtonHidden;
    _Bool _isTearingDownButtonViews;
    _Bool _isAnimatingAvatars;
    _Bool _ignoreNextWidthChange;
    id <CKNavigationBarCanvasViewDelegate> _delegate;
    UIView *_titleView;
    UIView *_leftItemView;
    UIView *_rightItemView;
    double _preferredHeight;
    long long _statusIndicatorType;
    long long _joinButtonStyle;
    CKNavigationButtonView *_buttonViewFaceTimeAudio;
    CKNavigationButtonView *_buttonViewFaceTimeVideo;
    CKNavigationButtonView *_buttonViewInfo;
    UIImageView *_statusIndicatorImageView;
}

@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeAudio;
@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeVideo;
@property (retain, nonatomic) CKNavigationButtonView *buttonViewInfo;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (nonatomic) _Bool isTearingDownButtonViews;
@property (nonatomic) _Bool isAnimatingAvatars;
@property (nonatomic) _Bool ignoreNextWidthChange;
@property (weak, nonatomic) id <CKNavigationBarCanvasViewDelegate> delegate;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *leftItemView;
@property (retain, nonatomic) UIView *rightItemView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) _Bool enforceLeftItemViewsAlignmentToCenter;
@property (nonatomic) _Bool keepTitleViewCentered;
@property (nonatomic) _Bool isBusinessChat;
@property (nonatomic) _Bool videoEnabled;
@property (nonatomic) _Bool audioEnabled;
@property (nonatomic) _Bool shouldAnimateAvatarLayoutChanges;
@property (nonatomic) _Bool isInEditingMode;
@property (nonatomic) _Bool isShowingControls;
@property (nonatomic) _Bool multiwayAudioButtonHidden;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic) long long joinButtonStyle;

+ (double)minHeight;
+ (double)maxHeight;
+ (double)preferredLandscapeHeightForRegularWidth;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)heightWithButtonViews;
+ (double)heightWithoutButtonViews;
+ (double)heightWithButtonViewsContactless;
+ (double)heightWithoutButtonViewsContactless;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canShowAvatarView;
- (void)clearAllItemViews;
- (id)initWithFrame:(struct CGRect)arg1 preferredHeight:(double)arg2;
- (void)removeButtonViewsIfNeeded;
- (void)_updateJoinButtonStyle;
- (struct CGRect)_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(_Bool)arg2;
- (void)_setupButtonContainer;
- (void)_tearDownButtonContainer;
- (_Bool)_shouldUseTallHeight;
- (struct UIEdgeInsets)systemMinimumLayoutMarginsFromDelegate;
- (void)layoutTitleViewIfNeeded:(struct CGRect)arg1;

@end
