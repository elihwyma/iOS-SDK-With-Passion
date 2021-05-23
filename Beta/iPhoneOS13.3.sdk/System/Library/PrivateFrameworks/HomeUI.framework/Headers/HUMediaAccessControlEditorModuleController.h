/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HFMediaAccessControlEditorItemModule, NSString;

@protocol HUMediaAccessControlEditorModuleControllerDelegate;

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController

{
    id <HUMediaAccessControlEditorModuleControllerDelegate> _delegate;
}

@property (weak, nonatomic, readonly) HFMediaAccessControlEditorItemModule *module;
@property (weak, nonatomic) id <HUMediaAccessControlEditorModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)updateAccessControlDescriptor:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;

@end
