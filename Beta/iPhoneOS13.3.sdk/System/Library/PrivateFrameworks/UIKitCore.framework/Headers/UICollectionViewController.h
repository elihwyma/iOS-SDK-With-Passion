/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, UICollectionView, UICollectionViewLayout, UILongPressGestureRecognizer, UIScrollView;

@protocol _UIKeyboardAutoRespondingScrollView;

@interface UICollectionViewController : UIViewController <Swift>

{
    UICollectionViewLayout *_layout;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_reorderingGesture;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int useLayoutToLayoutNavigationTransitions:1;
        unsigned int installsStandardReorderingGesture:1;
    } _collectionViewControllerFlags;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) _Bool clearsSelectionOnViewWillAppear;
@property (nonatomic) _Bool useLayoutToLayoutNavigationTransitions;
@property (nonatomic, readonly) UICollectionViewLayout *collectionViewLayout;
@property (nonatomic) _Bool installsStandardGestureForInteractiveMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)preferredFocusedView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)contentScrollView;
- (void)__viewWillAppear:(_Bool)arg1;
- (void)__viewDidAppear:(_Bool)arg1;
- (void)_updateCollectionViewLayoutAndDelegate:(id)arg1;
- (id)_wrappingView;
- (id)_newCollectionViewWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)viewWillUnload;
- (id)_uiCollectionView;
- (void)_installReorderingGestureIfNecessary;
- (void)_setUseLayoutToLayoutNavigationTransitions:(_Bool)arg1 withCheck:(_Bool)arg2;
- (_Bool)_shouldRespondToPreviewingMethods;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_handleReorderingGesture:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)_setSharedCollectionView:(id)arg1;
- (void)_clearSharedView;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (_Bool)shouldCrossFadeNavigationBar;
- (_Bool)shouldCrossFadeBottomBars;

@end
