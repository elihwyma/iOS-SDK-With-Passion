/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFMediaSystemBuilder, HUMediaSystemEditorGridViewController, HUMediaSystemEditorItemManager, NAFuture, NSString;

@protocol HUMediaSystemEditorViewControllerDelegate, HUPresentationDelegate;

@interface HUMediaSystemEditorViewController : HUItemTableViewController <Swift>

{
    _Bool _hasViewEverAppeared;
    id <HUPresentationDelegate> _presentationDelegate;
    HUMediaSystemEditorGridViewController *_serviceGridViewController;
    id <HUMediaSystemEditorViewControllerDelegate> _mediaSystemEditorDelegate;
    NAFuture *_createNewMediaSystemFuture;
    NAFuture *_accountArbitrationFuture;
}

@property (retain, nonatomic) HUMediaSystemEditorItemManager *itemManager;
@property (nonatomic, readonly) HUMediaSystemEditorGridViewController *serviceGridViewController;
@property (nonatomic) _Bool hasViewEverAppeared;
@property (retain, nonatomic) NAFuture *createNewMediaSystemFuture;
@property (retain, nonatomic) NAFuture *accountArbitrationFuture;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) id <HUMediaSystemEditorViewControllerDelegate> mediaSystemEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

+ (_Bool)adoptsDefaultGridLayoutMargins;
+ (_Bool)wouldPairingAccessoriesNecessitateConfiguration:(id)arg1;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)savedName;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)childViewControllersToPreload;
- (id)mediaSystemEditorGrid:(id)arg1 didUpdateMediaSystemBuilder:(id)arg2;
- (id)initForCreatingNewMediaSystemFromMediaAccessories:(id)arg1 home:(id)arg2;
- (void)createMediaSystemWithAccessory:(id)arg1;
- (id)initForEditingExistingMediaSystemBuilder:(id)arg1;
- (id)createMediaSystem;
- (id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
- (id)_promptForRoomChange;
- (id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)arg1;
- (void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)arg1;
- (CDUnknownBlockType)_authKitContextGenerator;
- (id)initForCreatingNewMediaSystem:(id)arg1;

@end
