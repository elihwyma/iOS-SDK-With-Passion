/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUQuickControlSummaryNavigationBarTitleView, HUSceneActionEditorItemManager, NSMutableDictionary, NSSet, NSString;

@protocol HUPresentationDelegate, HUSceneEditorDelegate;

@interface HUSceneActionEditorViewController : HUItemTableViewController <Swift>

{
    _Bool _requiresPresentingViewControllerDismissal;
    _Bool _showCancelButton;
    _Bool _hasViewEverAppeared;
    id <HUPresentationDelegate> _presentationDelegate;
    unsigned long long _mode;
    id <HUSceneEditorDelegate> _sceneEditorDelegate;
    HUQuickControlSummaryNavigationBarTitleView *_navigationBarTitleView;
    NSString *_editingName;
    NSMutableDictionary *_actionGridViewControllersByEditorType;
}

@property (nonatomic, readonly) HUSceneActionEditorItemManager *itemManager;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (copy, nonatomic) NSString *editingName;
@property (nonatomic, readonly) NSString *savedName;
@property (nonatomic, readonly) NSMutableDictionary *actionGridViewControllersByEditorType;
@property (nonatomic) _Bool hasViewEverAppeared;
@property (nonatomic) _Bool showCancelButton;
@property (weak, nonatomic) id <HUSceneEditorDelegate> sceneEditorDelegate;
@property (copy, nonatomic) NSSet *prioritizedServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool requiresPresentingViewControllerDismissal;

+ (_Bool)adoptsDefaultGridLayoutMargins;

- (id)commitChanges;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)nameAndIconEditorCellDidTapIcon:(id)arg1;
- (void)iconPickerDidCancel:(id)arg1;
- (void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1;
- (id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)_validateDoneButton;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)childViewControllersToPreload;
- (id)initWithActionSetBuilder:(id)arg1 mode:(unsigned long long)arg2;
- (void)sceneServicePickerDidFinish:(id)arg1;
- (void)_presentMediaSelection;
- (_Bool)_allowEditingNameAndIcon;
- (void)_updateActionSetBuilderName;
- (id)_actionGridViewControllerForEditorType:(unsigned long long)arg1;
- (void)_changeServices:(id)arg1;
- (void)_testScene:(id)arg1;
- (void)_deleteScene:(id)arg1 indexPath:(id)arg2;

@end
