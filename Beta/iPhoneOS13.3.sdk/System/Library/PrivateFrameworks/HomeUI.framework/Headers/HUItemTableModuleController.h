/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFItemModule, NSString;

@protocol HUItemTableModuleControllerHosting;

@interface HUItemTableModuleController : NSObject

{
    id <HUItemTableModuleControllerHosting> _host;
    HFItemModule *_module;
}

@property (weak, nonatomic) id <HUItemTableModuleControllerHosting> host;
@property (nonatomic, readonly) HFItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)textFieldForVisibleItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (_Bool)canSelectDisabledItem:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;

@end
