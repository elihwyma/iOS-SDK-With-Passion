/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCuratedLibraryStyleGuide, PXCuratedLibraryViewModel, PXUpdater, UIView, UIVisualEffectView;

@interface PXCuratedLibrarySecondaryToolbarController : NSObject <Swift>

{
    _Bool _willUpdate;
    _Bool _isAtTop;
    _Bool _stretched;
    UIView *_containerView;
    PXCuratedLibraryViewModel *_viewModel;
    UIView *_contentView;
    PXUpdater *_updater;
    PXCuratedLibraryStyleGuide *_styleGuide;
    UIView *_secondaryToolbar;
    UIVisualEffectView *_backgroundEffectView;
    double _height;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;
@property (nonatomic, readonly) UIView *secondaryToolbar;
@property (nonatomic, readonly) UIVisualEffectView *backgroundEffectView;
@property (nonatomic) _Bool isAtTop;
@property (nonatomic) _Bool stretched;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic, readonly) struct UIEdgeInsets containerViewAdditionalEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithContainerView:(id)arg1 viewModel:(id)arg2;
- (void)_invalidatePositioning;
- (void)_updatePositioning;
- (void)_invalidateSecondaryToolbarLayout;
- (void)_updateSecondaryToolbarLayout;
- (void)_invalidateContentLayout;
- (void)_updateContentLayout;

@end
