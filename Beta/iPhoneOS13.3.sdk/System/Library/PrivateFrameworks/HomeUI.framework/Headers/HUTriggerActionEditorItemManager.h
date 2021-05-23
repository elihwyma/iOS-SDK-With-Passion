/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFSimpleItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerActionEditorItemManager : HFSimpleItemManager

{
    HFStaticItem *_gridItem;
    HFStaticItem *_addShortcutHeader;
    HFStaticItem *_addShortcutItem;
    HUInstructionsItem *_instructionsItem;
}

@property (retain, nonatomic) HFStaticItem *gridItem;
@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *addShortcutHeader;
@property (retain, nonatomic) HFStaticItem *addShortcutItem;

- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithInstructionsItem:(id)arg1 andDelegate:(id)arg2 showShortcutItem:(_Bool)arg3;

@end
