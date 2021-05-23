/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@interface SXViewControllerPresentingManager : NSObject

{
    UIViewController *_presentingViewController;
}

@property (nonatomic, readonly) UIViewController *controller;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)popOrDismissViewControllerAnimated:(_Bool)arg1;

@end
