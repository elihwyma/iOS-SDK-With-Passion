/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class NSString;

@protocol HUPresenceUserPickerItemModuleControllerDelegate;

@interface HUPresenceUserPickerItemModuleController : HUItemTableModuleController

{
    id <HUPresenceUserPickerItemModuleControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <HUPresenceUserPickerItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (_Bool)canSelectDisabledItem:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (id)_showAlertForConfirmationPrompt:(id)arg1;

@end
