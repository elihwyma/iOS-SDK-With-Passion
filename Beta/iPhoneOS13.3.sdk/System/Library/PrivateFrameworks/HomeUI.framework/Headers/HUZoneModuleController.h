/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HFZoneModule, HMRoom, HUEditableTextCell, HUTitleValueCell, NSString;

@interface HUZoneModuleController : HUItemTableModuleController

{
    HMRoom *_room;
    HUTitleValueCell *_currentZoneItemCell;
    HUEditableTextCell *_createNewZoneCell;
}

@property (retain, nonatomic) HMRoom *room;
@property (weak, nonatomic) HUTitleValueCell *currentZoneItemCell;
@property (weak, nonatomic) HUEditableTextCell *createNewZoneCell;
@property (nonatomic, readonly) HFZoneModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (void)_configureCurrentZonesItem:(id)arg1 forCell:(id)arg2 animated:(_Bool)arg3;
- (void)_configureZoneBuilderItem:(id)arg1 forCell:(id)arg2 animated:(_Bool)arg3;
- (void)_configureZoneItem:(id)arg1 forCell:(id)arg2 animated:(_Bool)arg3;
- (void)_configureCreateNewZoneItem:(id)arg1 forCell:(id)arg2 animated:(_Bool)arg3;
- (id)_didSelectZoneItem:(id)arg1;
- (id)_didSelectZoneBuilderItem:(id)arg1;
- (void)_updateCreateNewZoneCellText:(_Bool)arg1;
- (_Bool)_validateNewZoneName:(id)arg1;
- (id)_createNewZoneWithName:(id)arg1;
- (id)initWithModule:(id)arg1 room:(id)arg2;
- (id)finishZoneNameEditing;

@end
