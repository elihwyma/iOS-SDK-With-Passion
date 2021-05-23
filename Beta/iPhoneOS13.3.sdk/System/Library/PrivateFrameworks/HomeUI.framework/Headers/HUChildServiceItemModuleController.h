/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HFItemBuilder, HUChildServiceEditorItemModule, NSMapTable, NSString;

@protocol HFServiceLikeBuilder, HUChildServiceModuleControllerDelegate;

@interface HUChildServiceItemModuleController : HUItemTableModuleController

{
    id <HUChildServiceModuleControllerDelegate> _delegate;
    HUChildServiceEditorItemModule *_childServiceItemModule;
    HFItemBuilder<HFServiceLikeBuilder> *_activelyEditingNameServiceBuilder;
    NSMapTable *_identifyButtonMap;
}

@property (retain, nonatomic) HUChildServiceEditorItemModule *childServiceItemModule;
@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder;
@property (retain, nonatomic) NSMapTable *identifyButtonMap;
@property (weak, nonatomic) id <HUChildServiceModuleControllerDelegate> delegate;
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
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (_Bool)canSelectDisabledItem:(id)arg1;
- (void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2;
- (void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2;

@end
