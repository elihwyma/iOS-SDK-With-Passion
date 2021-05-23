/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HFMediaAccessoryItem, NSString;

@protocol HUContainedMediaAccessoriesGridViewControllerDelegate, HUPresentationDelegate;

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController

{
    _Bool _requiresPresentingViewControllerDismissal;
    _Bool _presentedModally;
    id <HUPresentationDelegate> _presentationDelegate;
    HFMediaAccessoryItem *_mediaAccessoryItem;
    id <HUContainedMediaAccessoriesGridViewControllerDelegate> _mediaAccessoryGridDelegate;
}

@property (nonatomic, getter=isPresentedModally) _Bool presentedModally;
@property (copy, nonatomic, readonly) HFMediaAccessoryItem *mediaAccessoryItem;
@property (weak, nonatomic) id <HUContainedMediaAccessoriesGridViewControllerDelegate> mediaAccessoryGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

- (void)viewDidLoad;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)_edit:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)_updateRightBarButtons;
- (_Bool)requiresPresentingViewControllerDismissal;
- (void)setRequiresPresentingViewControllerDismissal:(_Bool)arg1;
- (id)initWithAccessoryContainerItem:(id)arg1;
- (id)initWithMediaAccessoryContainerItem:(id)arg1 isPresentedModally:(_Bool)arg2 valueSource:(id)arg3;

@end
