/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/Swift-Protocol.h>

@class IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <Swift>

{
    IKViewElement *_templateElement;
    _TVCollectionView *_collectionView;
    NSArray *_collectionViewElements;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
    NSIndexPath *_lastFocusedIndexPath;
    _Bool _updateAutoHighlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)preferredFocusEnvironments;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)_blurEffectStyle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)updateWithViewElement:(id)arg1;
- (struct CGSize)_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (_Bool)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)updateWithTemplateElement:(id)arg1;
- (void)_scrollToPreferredFocusView;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;

@end
