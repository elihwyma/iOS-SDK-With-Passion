/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView, UIView;

@protocol CKGradientReferenceView;

@interface CKColoredBalloonView : CKBalloonView

{
    BOOL _color;
    _Bool _wantsGradient;
    CKBalloonImageView *_mask;
    CKBalloonImageView *_effectViewMask;
    CKGradientView *_gradientView;
    struct CGRect _gradientOverrideFrame;
}

@property (retain, nonatomic) CKBalloonImageView *mask;
@property (retain, nonatomic) CKBalloonImageView *effectViewMask;
@property (retain, nonatomic) CKGradientView *gradientView;
@property (nonatomic) _Bool wantsGradient;
@property (nonatomic) BOOL color;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic, readonly) _Bool hasBackground;
@property (nonatomic) struct CGRect gradientOverrideFrame;

- (id)description;
- (void)prepareForReuse;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)setCanUseOpaqueMask:(_Bool)arg1;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (void)setHasTail:(_Bool)arg1;
- (id)overlayColor;
- (_Bool)needsGroupOpacity;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)setEffectViewMaskImage:(id)arg1;
- (void)updateWantsGradient;

@end
