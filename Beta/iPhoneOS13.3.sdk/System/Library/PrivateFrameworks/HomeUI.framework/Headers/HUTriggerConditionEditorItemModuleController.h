/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUTriggerConditionDetailEditingContext, HUTriggerConditionEditorItemModule, NSString;

@protocol HUTriggerConditionEditorItemModuleControllerDelegate;

@interface HUTriggerConditionEditorItemModuleController : HUItemTableModuleController

{
    id <HUTriggerConditionEditorItemModuleControllerDelegate> _delegate;
    HUTriggerConditionDetailEditingContext *_detailEditingContext;
}

@property (retain, nonatomic) HUTriggerConditionDetailEditingContext *detailEditingContext;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *module;
@property (weak, nonatomic, readonly) id <HUTriggerConditionEditorItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (void)timeConditionEditorDidCancel:(id)arg1;
- (void)timeConditionEditor:(id)arg1 didFinishWithCondition:(id)arg2;
- (_Bool)_canEditConditionOptionItem:(id)arg1;
- (void)_presentDetailEditorForConditionOptionItem:(id)arg1;
- (void)_dismissDetailEditor:(id)arg1;

@end
