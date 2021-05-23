/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule

{
    HFItem *_chooseInputsSelectionItem;
}

@property (nonatomic, readonly) HFItem *chooseInputsSelectionItem;

+ (id)supportedServiceTypes;
+ (CDUnknownBlockType)_serviceItemComparatorForTelevisionProfile:(id)arg1;

- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (_Bool)canToggleConfigurationStateForItem:(id)arg1;

@end
