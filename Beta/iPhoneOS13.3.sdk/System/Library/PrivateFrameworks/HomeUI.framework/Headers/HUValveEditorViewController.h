/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUNameItemModuleController, HUValveEditorItemManager, NSMutableSet;

@interface HUValveEditorViewController : HUItemTableViewController

{
    HUValveEditorItemManager *_valveEditorItemManager;
    HUNameItemModuleController *_nameModuleController;
    NSMutableSet *_moduleControllers;
}

@property (retain, nonatomic) HUValveEditorItemManager *valveEditorItemManager;
@property (retain, nonatomic) HUNameItemModuleController *nameModuleController;
@property (retain, nonatomic) NSMutableSet *moduleControllers;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)itemModuleControllers;
- (id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2;

@end
