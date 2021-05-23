/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSExtension, NSString, UIFontDescriptor, UIFontPickerViewControllerConfiguration, _UIFontPickerRemoteViewController, _UIRemoteViewController;

@protocol NSCopying, UIFontPickerViewControllerDelegate;

@interface UIFontPickerViewController : UIViewController

{
    _Bool _presentingViewController;
    _UIFontPickerRemoteViewController *_childViewController;
    UIFontPickerViewControllerConfiguration *_configuration;
    id <UIFontPickerViewControllerDelegate> _delegate;
    UIFontDescriptor *_selectedFontDescriptor;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id <NSCopying> extensionRequestIdentifier;
@property (copy, nonatomic, readonly) UIFontPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) id <UIFontPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_viewControllerPresentationDidInitiate;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setChildViewController:(id)arg1;
- (id)remoteViewController;
- (void)_pickerDidSelectFont:(id)arg1;
- (void)_pickerDidCancel;
- (id)initWithMode:(unsigned long long)arg1;
- (id)_initWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSelectedFont:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initWithMode:(unsigned long long)arg1 hideSearchBar:(_Bool)arg2 tintColor:(id)arg3;

@end
