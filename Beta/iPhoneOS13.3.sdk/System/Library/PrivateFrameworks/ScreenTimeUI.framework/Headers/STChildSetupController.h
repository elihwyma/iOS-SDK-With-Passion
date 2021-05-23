/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class STIntroductionController, STRootViewModelCoordinator, UIViewController;

@interface STChildSetupController : NSObject

{
    CDUnknownBlockType _completionHandler;
    UIViewController *_initialViewController;
    STRootViewModelCoordinator *_coordinator;
    STIntroductionController *_introductionController;
}

@property (retain, nonatomic) STRootViewModelCoordinator *coordinator;
@property (retain, nonatomic) STIntroductionController *introductionController;
@property (copy) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) UIViewController *initialViewController;

- (id)initWithDSID:(id)arg1;
- (void)saveValuesForModel:(id)arg1;

@end
