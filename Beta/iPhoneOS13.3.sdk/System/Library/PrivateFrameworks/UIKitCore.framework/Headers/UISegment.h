/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class NSArray, NSString, UIView, _UIBadgeView, _UIFloatingContentView, _UISegmentedControlAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView

{
    UIView *_info;
    UIImageView *_backgroundView;
    UIImageView *_selectionImageView;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    _UIFloatingContentView *_floatingContentView;
    double _width;
    struct CGSize _contentOffset;
    long long _barStyle;
    unsigned long long _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id _objectValue;
    struct {
        unsigned int size:2;
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showDivider:1;
        unsigned int hasImage:1;
        unsigned int position:3;
        unsigned int autosizeText:1;
        unsigned int isMomentary:1;
        unsigned int wasSelected:1;
        unsigned int needsBackgroundAndContentViewUpdate:1;
        unsigned int usesAXTextSize:1;
        unsigned int selectionIndicatorDragged:1;
    } _segmentFlags;
    NSArray *_infoConstraints;
    double _requestedScaleFactor;
}

@property (copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;
@property (getter=isSelected) _Bool selected;
@property (getter=isMomentary) _Bool momentary;
@property int controlSize;
@property (copy, nonatomic) NSString *badgeValue;
@property (readonly) UIView *badgeView;
@property (nonatomic) double requestedScaleFactor;
@property (nonatomic) unsigned int position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundImageWithStorage:(id)arg1 mini:(_Bool)arg2 state:(unsigned long long)arg3 position:(unsigned int)arg4 drawMode:(unsigned int *)arg5 isCustom:(_Bool *)arg6 defaultBlock:(CDUnknownBlockType)arg7;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)label;
- (struct CGSize)contentSize;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (id)viewForLastBaselineLayout;
- (void)setContentOffset:(struct CGSize)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_encodableSubviews;
- (void)setBarStyle:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)_barHeight;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_effectiveContentView;
- (id)_floatingContentView;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (void)insertDividerView;
- (void)_updateTextColors;
- (void)_commonSegmentInit;
- (id)_effectiveBackgroundView;
- (unsigned long long)_segmentState;
- (Class)_segmentedControlClass;
- (id)_effectiveBackgroundTintColor;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (id)_dividerImageIsCustom:(_Bool *)arg1;
- (void)_updateBackgroundAndContentViews;
- (_Bool)_effectiveDisableShadow;
- (id)_effectiveSelectedSegmentTintColor;
- (void)_insertSelectionView;
- (struct CATransform3D)_highlightSelectionInfoTransform;
- (void)_updateSelectionToTransform:(struct CATransform3D)arg1 infoTransform:(struct CATransform3D)arg2 hideSelection:(_Bool)arg3 shouldAnimate:(_Bool)arg4;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)_positionInfo;
- (void)_updateHighlight;
- (void)_updateSelectionIndicator;
- (id)_stateTextAttibutes:(id)arg1 segmentState:(unsigned long long)arg2;
- (_Bool)_hasSelectedColor;
- (void)updateMasking;
- (id)_attributedTextForState:(unsigned long long)arg1 selected:(_Bool)arg2;
- (void)_setEnabledAppearance:(_Bool)arg1;
- (void)_setSelectionIndicatorDragged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_invalidateInfoConstraints;
- (struct UIEdgeInsets)_paddingInsets;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_maximumTextSize;
- (struct CGRect)contentRect;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (id)initWithInfo:(id)arg1 size:(int)arg2 barStyle:(long long)arg3 tintColor:(id)arg4 appearanceStorage:(id)arg5 position:(unsigned int)arg6 autosizeText:(_Bool)arg7;
- (id)_tintColorArchivingKey;
- (void)updateForAppearance:(id)arg1;
- (id)_dividerImage;
- (void)setWasSelected:(_Bool)arg1;
- (void)setUsesAXTextSize:(_Bool)arg1;
- (id)disabledTextColor;
- (void)setAutosizeText:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
- (_Bool)isSelectionIndicatorDragged;
- (void)setSelectionIndicatorDragged:(_Bool)arg1;
- (_Bool)_isContainedInHostedFocusSystem;
- (_Bool)showDivider;
- (void)setShowDivider:(_Bool)arg1;
- (void)animateAdd:(_Bool)arg1;
- (void)animateRemoveForWidth:(double)arg1;
- (void)_positionInfoWithoutAnimation;
- (id)_segmentLabel;
- (void)_forceInfoDisplay;
- (void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(_Bool)arg4;
- (_Bool)useBlockyMagnificationInClassic;
- (double)_idealWidth;

@end
