/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController

{
    _Bool _shouldResignFirstResponder;
    CDUnknownBlockType _finishedWithResultsCompletionBlock;
    long long _sandboxExtensionHandle;
}

@property long long sandboxExtensionHandle;
@property _Bool shouldResignFirstResponder;
@property (copy, nonatomic) CDUnknownBlockType finishedWithResultsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2;
- (void)beginDismissWithInfo:(id)arg1;

@end
