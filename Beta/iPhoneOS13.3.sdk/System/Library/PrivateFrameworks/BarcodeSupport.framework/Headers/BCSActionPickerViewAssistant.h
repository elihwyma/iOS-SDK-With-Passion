/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController;

__attribute__((visibility("hidden")))
@interface BCSActionPickerViewAssistant : NSObject

{
    UIAlertController *_alertController;
}

@property (nonatomic, readonly, getter=isShowingPicker) _Bool showingPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)showActionPickerWithItems:(id)arg1 fromViewController:(id)arg2 presentingRect:(struct CGRect)arg3;
- (void)_cleanUpAlertController;
- (id)actionPickerItemAlertController:(id)arg1;
- (void)actionPickerItem:(id)arg1 didDismissAlertController:(id)arg2;

@end
