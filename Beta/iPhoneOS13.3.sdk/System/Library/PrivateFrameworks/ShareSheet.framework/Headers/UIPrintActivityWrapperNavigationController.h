/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UINavigationController.h>

@class NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController

{
    CDUnknownBlockType _completionHandler;
    _Bool _presentedPrintInteractionController;
}

@property (nonatomic) _Bool presentedPrintInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end
