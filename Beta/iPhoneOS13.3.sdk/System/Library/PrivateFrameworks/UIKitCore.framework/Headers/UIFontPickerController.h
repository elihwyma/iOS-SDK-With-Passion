/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIFontDescriptor, UIFontPickerViewController;

@protocol UIFontPickerDelegate;

@interface UIFontPickerController : NSObject

{
    UIFontPickerController *_strongSelf;
    UIFontPickerViewController *_pickerController;
    id <UIFontPickerDelegate> _delegate;
    unsigned long long _mode;
    UIFontDescriptor *_selectedFontDescriptor;
}

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) UIFontDescriptor *selectedFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (weak, nonatomic) id <UIFontPickerDelegate> delegate;

- (id)init;
- (id)remoteViewController;
- (void)fontPickerDidPickFont:(id)arg1;
- (void)fontPickerWasCancelled:(id)arg1;
- (_Bool)presentFontPickerFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentFontPickerFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;

@end
