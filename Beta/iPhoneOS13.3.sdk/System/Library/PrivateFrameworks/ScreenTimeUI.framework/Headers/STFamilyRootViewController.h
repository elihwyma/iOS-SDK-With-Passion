/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STListViewController.h>

@class NSObject;

@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STFamilyRootViewController : STListViewController

{
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;

- (id)init;

@end
