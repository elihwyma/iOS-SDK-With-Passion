/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, PXBarSpec, UIViewController;

@protocol PXActionPerformerDelegate;

@interface PXBarsController : NSObject

{
    struct {
        _Bool needsUpdateBars;
    } _needsUpdateFlags;
    _Bool _wantsAnimatedBarsUpdate;
    UIViewController *_viewController;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    PXBarSpec *_barSpec;
    NSMutableDictionary *_barButtonItemCache;
}

@property (retain, nonatomic) PXBarSpec *barSpec;
@property (nonatomic, readonly) NSMutableDictionary *barButtonItemCache;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id <PXActionPerformerDelegate> actionPerformerDelegate;
@property (nonatomic) _Bool wantsAnimatedBarsUpdate;
@property (nonatomic, readonly) NSArray *leftBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *rightBarButtonItemIdentifiers;
@property (nonatomic, readonly) NSArray *toolbarItemIdentifiers;

- (id)init;
- (_Bool)_needsUpdate;
- (void)updateIfNeeded;
- (void)invalidateBars;
- (void)_updateBarsIfNeeded;
- (void)updateBars;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1;
- (id)barButtonItemForIdentifier:(id)arg1;
- (void)invalidateBarButtonItemWithIdentifier:(id)arg1;

@end
