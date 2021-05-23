/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;

@protocol _UIFontPickerRemoteViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIFontPickerRemoteViewController : _UIRemoteViewController

{
    id <_UIFontPickerRemoteViewControllerHost> _delegate;
}

@property (weak, nonatomic) id <_UIFontPickerRemoteViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_pickerDidSelectFont:(id)arg1;
- (void)_pickerDidCancel;

@end
