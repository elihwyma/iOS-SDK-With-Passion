/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKCollectionElement, IKViewElement, NSString, TVCarouselLayout, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface _TVCarouselViewController : UIViewController

{
    TVCarouselLayout *_carouselLayout;
    IKCollectionElement *_collectionElement;
    _TVCarouselView *_carouselView;
    IKViewElement *_headerElement;
    struct {
        _Bool didAppear;
        _Bool indexesDirty;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)headerElementFromCollectionElement:(id)arg1;

- (void)dealloc;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_updateLayout;
- (void)_updateHeaderView;
- (void)_selectButtonAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
- (void)collectionViewCellDidSelect:(id)arg1;
- (void)_cancelImpressionsUpdate;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)updateWithViewElement:(id)arg1 layout:(id)arg2;
- (void)_registerCellClasses;
- (void)_updateAutoScrollInterval;
- (void)_updateLayoutAndReload;
- (void)_updateImpressions;
- (void)_dispatchEvent:(id)arg1 forItemAtIndex:(unsigned long long)arg2 cell:(id)arg3;
- (void)_recordImpressionsForVisibleView;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(id)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewDidScroll:(id)arg1;
- (void)carouselView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (_Bool)_needsDefaultCarouselCells;

@end
