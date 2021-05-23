/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIViewController;

@protocol _UIDocumentPickerRemoteViewControllerContaining;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <Swift>

{
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *_publicController;
    NSString *_identifier;
}

@property (weak, nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)invalidate;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)_dismissViewController;
- (void)_didSelectURLWrapper:(id)arg1;
- (void)_didSelectURLBookmark:(id)arg1;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
