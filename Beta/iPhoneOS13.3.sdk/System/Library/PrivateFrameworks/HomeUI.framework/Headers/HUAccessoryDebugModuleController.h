/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUAccessoryDebugModule, NSMapTable, NSString;

@interface HUAccessoryDebugModuleController : HUItemTableModuleController

{
    NSMapTable *_cellToItemMap;
}

@property (retain) NSMapTable *cellToItemMap;
@property (nonatomic, readonly) HUAccessoryDebugModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;

@end
