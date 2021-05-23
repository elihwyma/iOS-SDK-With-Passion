/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUTileLayoutInfo, PUTilingView;

@interface PUTileController : NSObject

{
    _Bool _active;
    _Bool _detached;
    _Bool _shouldPreserveCurrentContent;
    _Bool _reusable;
    _Bool _wantsVisibleRectChanges;
    NSString *_reuseIdentifier;
    long long _animationCount;
    PUTilingView *_tilingView;
    PUTileLayoutInfo *_layoutInfo;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isDetached) _Bool detached;
@property (nonatomic, getter=isReusable) _Bool reusable;
@property (nonatomic) long long animationCount;
@property (nonatomic, readonly) _Bool isAnimating;
@property (weak, nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) PUTileLayoutInfo *layoutInfo;
@property (nonatomic, readonly) struct CGRect visibleRect;
@property (nonatomic, readonly) _Bool wantsVisibleRectChanges;
@property (nonatomic, readonly) _Bool isPresentationActive;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) PUTileLayoutInfo *presentationLayoutInfo;
@property (nonatomic) _Bool shouldPreserveCurrentContent;
@property (nonatomic, readonly) _Bool shouldAvoidInPlaceSnapshottedFadeOut;

- (id)init;
- (id)description;
- (id)freeze;
- (void)prepareForReuse;
- (void)removeAllAnimations;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (long long)willBeginAnimation;
- (void)didEndAnimation:(long long)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)didChangeActive;
- (void)setTilingView:(id)arg1;
- (void)didChangeVisibleRect;
- (void)didChangeAnimating;
- (void)setPreloadedImage:(id)arg1;
- (id)generateAssetTransitionInfo;
- (void)addToTilingView:(id)arg1;
- (void)reuseIfApplicable;
- (_Bool)adoptAssetTransitionInfo:(id)arg1;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
