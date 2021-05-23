/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFilteredMomentsViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, UIViewController;

@protocol PXGridPresentationNavigationItemDelegate;

__attribute__((visibility("hidden")))
@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <Swift>

{
    UIViewController *_containerViewController;
    id <PXGridPresentationNavigationItemDelegate> _navigationItemDelegate;
}

@property (weak, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) id <PXGridPresentationNavigationItemDelegate> navigationItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (_Bool)isInPlaces:(id)arg1;

@end
