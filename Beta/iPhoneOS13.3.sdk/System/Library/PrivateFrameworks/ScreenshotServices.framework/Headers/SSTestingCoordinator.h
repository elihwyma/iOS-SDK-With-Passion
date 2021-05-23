/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@protocol SSTestingCoordinatorDelegate;

@interface SSTestingCoordinator : NSObject

{
    id <SSTestingCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <SSTestingCoordinatorDelegate> delegate;

- (_Bool)_runPPTRequestRequiresTakingScreenshot:(id)arg1;
- (void)_delayedHandleRunPPTRequest:(id)arg1;
- (void)handleRunPPTRequest:(id)arg1;

@end
