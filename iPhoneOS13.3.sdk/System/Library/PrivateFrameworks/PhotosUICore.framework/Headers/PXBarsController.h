//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, PXBarSpec, UIViewController;
@protocol PXActionPerformerDelegate;

@interface PXBarsController : NSObject
{
    struct {
        BOOL needsUpdateBars;
    } _needsUpdateFlags;
    BOOL _wantsAnimatedBarsUpdate;
    UIViewController *_viewController;
    id <PXActionPerformerDelegate> _actionPerformerDelegate;
    PXBarSpec *_barSpec;
    NSMutableDictionary *_barButtonItemCache;
}

@property(readonly, nonatomic) NSMutableDictionary *barButtonItemCache; // @synthesize barButtonItemCache=_barButtonItemCache;
@property(retain, nonatomic) PXBarSpec *barSpec; // @synthesize barSpec=_barSpec;
@property(nonatomic) BOOL wantsAnimatedBarsUpdate; // @synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)invalidateBarButtonItemWithIdentifier:(id)arg1;
- (id)barButtonItemForIdentifier:(id)arg1;
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *toolbarItemIdentifiers;
@property(readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property(readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
- (void)updateBars;
- (void)_updateBarsIfNeeded;
- (void)updateIfNeeded;
- (void)invalidateBars;
- (BOOL)_needsUpdate;
- (id)init;

@end

