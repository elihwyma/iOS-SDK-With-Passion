/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject;

@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider

{
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;

+ (id)providerWithCoordinator:(id)arg1;

- (void)invalidate;

@end
