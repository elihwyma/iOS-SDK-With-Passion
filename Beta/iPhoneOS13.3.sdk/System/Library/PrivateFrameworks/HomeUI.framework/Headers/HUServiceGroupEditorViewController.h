/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUServiceGroupEditorGridViewController, HUServiceGroupEditorItemManager, NSString;

@protocol HUPresentationDelegate, HUServiceGroupEditorViewControllerDelegate;

@interface HUServiceGroupEditorViewController : HUItemTableViewController <Swift>

{
    _Bool _hasViewEverAppeared;
    id <HUPresentationDelegate> _presentationDelegate;
    HUServiceGroupEditorGridViewController *_serviceGridViewController;
    id <HUServiceGroupEditorViewControllerDelegate> _serviceGroupEditorDelegate;
    NSString *_editingName;
}

@property (retain, nonatomic) HUServiceGroupEditorItemManager *itemManager;
@property (nonatomic, readonly) HUServiceGroupEditorGridViewController *serviceGridViewController;
@property (copy, nonatomic) NSString *editingName;
@property (nonatomic, readonly) NSString *savedName;
@property (nonatomic) _Bool hasViewEverAppeared;
@property (weak, nonatomic) id <HUServiceGroupEditorViewControllerDelegate> serviceGroupEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

+ (_Bool)adoptsDefaultGridLayoutMargins;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initForEditingExistingServiceGroupBuilder:(id)arg1;
- (void)_validateDoneButton;
- (void)_updateServiceGroupBuilderName;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)serviceGroupEditorGrid:(id)arg1 didUpdateServiceGroupBuilder:(id)arg2;
- (id)initForCreatingNewServiceGroupFromServices:(id)arg1 home:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (id)childViewControllersToPreload;

@end
