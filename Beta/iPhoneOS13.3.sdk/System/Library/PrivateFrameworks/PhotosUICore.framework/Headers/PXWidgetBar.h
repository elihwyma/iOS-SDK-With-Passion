/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, PXBasicTileAnimator, PXScrollViewController, PXTilingController, PXWidgetBarLayout, PXWidgetBarSpec;

@protocol PXAnonymousView, PXWidgetBarDelegate;

@interface PXWidgetBar : NSObject

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool view;
        _Bool viewHeight;
        _Bool layout;
    } _needsUpdateFlags;
    struct {
        _Bool didSelectSubtitle;
        _Bool didSelectDisclosureAffordance;
    } _delegateRespondsTo;
    _Bool _allowUserInteractionWithSubtitle;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetBarDelegate> _delegate;
    PXTilingController *_tilingController;
    PXWidgetBarSpec *_spec;
    NSString *_title;
    NSString *_subtitle;
    NSString *_caption;
    NSString *_disclosureTitle;
    PXBasicTileAnimator *__tileAnimator;
    NSMutableSet *__tilesInUse;
    double __viewHeight;
    PXWidgetBarLayout *__layout;
    struct NSObject *_view;
}

@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, setter=_setViewHeight:) double _viewHeight;
@property (nonatomic, readonly) PXWidgetBarLayout *_layout;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *view;
@property (nonatomic, readonly) double viewHeight;
@property (weak, nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXWidgetBarDelegate> delegate;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (retain, nonatomic) PXWidgetBarSpec *spec;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (nonatomic) _Bool allowUserInteractionWithSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)updateView;
- (_Bool)_needsUpdate;
- (void)_invalidateLayout;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (struct NSObject *)createView;
- (id)initWithScrollViewController:(id)arg1;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)_updateLayoutIfNeeded;
- (id)checkOutTileWithKind:(long long)arg1;
- (void)checkInTile:(id)arg1;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)didSelectSubtitle;
- (void)didSelectDisclosureAffordance;
- (void)invalidateView;
- (void)_updateViewIfNeeded;
- (void)invalidateViewHeight;
- (void)_updateViewHeightIfNeeded;

@end
