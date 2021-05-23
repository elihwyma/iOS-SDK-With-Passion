/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, NSArray, NSMutableDictionary, NSString, UIImage, UIKBRenderConfig, _UIInputViewContent;

@interface UIInputView : UIView

{
    long long _style;
    UIKBRenderConfig *_renderConfig;
    _Bool _suppressBackgroundStyling;
    _Bool _disableSplitSupport;
    _UIInputViewContent *_leftContentView;
    _UIInputViewContent *_rightContentView;
    double _contentRatio;
    struct CGSize _leftContentSize;
    struct CGSize _rightContentSize;
    double _gapWidth;
    double _leftOffset;
    _Bool _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRatio;
    UIImage *_mergedImage;
    UIImage *_splitImage;
    NSMutableDictionary *_mergedSliceMap;
    NSMutableDictionary *_splitSliceMap;
    NSArray *_visibleLayers;
    CALayer *_transitionLayer;
    _Bool _allowsSelfSizing;
    _Bool _assertSizingWithPredictionBar;
    struct UIEdgeInsets _backgroundEdgeInsets;
}

@property (retain, nonatomic) UIImage *_mergedImage;
@property (retain, nonatomic) UIImage *_splitImage;
@property (retain, nonatomic) NSMutableDictionary *_mergedSliceMap;
@property (retain, nonatomic) NSMutableDictionary *_splitSliceMap;
@property (nonatomic) struct UIEdgeInsets backgroundEdgeInsets;
@property (nonatomic) _Bool assertSizingWithPredictionBar;
@property (nonatomic, readonly) UIView *leftContentView;
@property (nonatomic, readonly) UIView *rightContentView;
@property (nonatomic) double contentRatio;
@property (nonatomic) struct CGSize leftContentViewSize;
@property (nonatomic) struct CGSize rightContentViewSize;
@property (nonatomic, readonly) long long inputViewStyle;
@property (nonatomic) _Bool allowsSelfSizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_setupAppearanceIfNecessary;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)tintColor;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setRenderConfig:(id)arg1;
- (_Bool)_supportsSplit;
- (void)layoutMergedSubviews;
- (void)updateMergedSubviewConstraints;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;
- (void)willBeginSplitTransition;
- (void)didEndSplitTransition;
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (_Bool)_isToolbars;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;
- (_Bool)_isSplit;
- (_Bool)_isTransitioning;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_setNeedsContentSizeUpdate;
- (double)_additionalClipHeight;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (void)_updateClipCorners;
- (void)_updateWithSize:(struct CGSize)arg1;
- (id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1;
- (id)_toolbarBorderedBackground;
- (_Bool)_suppressBackgroundStyling;
- (void)_setSuppressBackgroundStyling:(_Bool)arg1;
- (_Bool)_disableSplitSupport;
- (void)_setDisableSplitSupport:(_Bool)arg1;
- (void)setInputViewStyle:(long long)arg1;
- (struct CGSize)_defaultSize;

@end
