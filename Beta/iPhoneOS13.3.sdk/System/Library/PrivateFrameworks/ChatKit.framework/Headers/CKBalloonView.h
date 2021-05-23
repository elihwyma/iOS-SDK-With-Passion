/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonImageView.h>

@class CABackdropLayer, CKInvisibleInkEffectController, CKManualUpdater, NSMutableArray, NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol CKBalloonViewDelegate;

@interface CKBalloonView : CKBalloonImageView

{
    BOOL _orientation;
    _Bool _hasTail;
    _Bool _filled;
    _Bool _showingMenu;
    _Bool _canUseOpaqueMask;
    _Bool _hasOverlay;
    _Bool _wantsSkinnyMask;
    _Bool _useLargeAsset;
    BOOL _balloonShape;
    BOOL _balloonTailShape;
    _Bool _invisibleInkEffectPaused;
    _Bool _animationPaused;
    id <CKBalloonViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    NSMutableArray *_filters;
    unsigned long long _balloonCorners;
    CABackdropLayer *_backdropFilterLayer;
    CKInvisibleInkEffectController *_invisibleInkEffectController;
    CKManualUpdater *_displayUpdater;
    UIImageView *_overlay;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) CKManualUpdater *displayUpdater;
@property (retain, nonatomic) UIImageView *overlay;
@property (retain, nonatomic) CKInvisibleInkEffectController *invisibleInkEffectController;
@property (weak, nonatomic) id <CKBalloonViewDelegate> delegate;
@property (nonatomic) BOOL orientation;
@property (nonatomic) _Bool hasTail;
@property (nonatomic, getter=isFilled) _Bool filled;
@property (nonatomic) struct UIEdgeInsets textAlignmentInsets;
@property (nonatomic, readonly, getter=isShowingMenu) _Bool showingMenu;
@property (nonatomic) _Bool canUseOpaqueMask;
@property (nonatomic) _Bool hasOverlay;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (nonatomic) _Bool wantsSkinnyMask;
@property (nonatomic) _Bool useLargeAsset;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) long long userInterfaceLevel;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) struct CKBalloonDescriptor_t balloonDescriptor;
@property (nonatomic) BOOL balloonShape;
@property (nonatomic) BOOL balloonTailShape;
@property (nonatomic) unsigned long long balloonCorners;
@property (nonatomic, readonly) _Bool needsGroupOpacity;
@property (retain, nonatomic) CABackdropLayer *backdropFilterLayer;
@property (nonatomic) _Bool invisibleInkEffectEnabled;
@property (nonatomic) _Bool invisibleInkEffectPaused;
@property (nonatomic) _Bool animationPaused;
@property (nonatomic, readonly) Class invisibleInkEffectViewClass;
@property (nonatomic, readonly) UIImage *imageForInvisibleInkEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)prepareForDisplay;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)setHasOverlay:(_Bool)arg1 autoDismiss:(_Bool)arg2;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;
- (void)prepareForDisplayIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)doubleTapGestureRecognized:(id)arg1;
- (void)longPressGestureRecognized:(id)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)_dismissOverlay;
- (void)updateRasterizationForInvisibleInkEffect;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasResumed;
- (void)updateBalloonForTraitCollection:(id)arg1;
- (void)setHasOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForAcknowledgementDismissal;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)configureForChatItem:(id)arg1;

@end
