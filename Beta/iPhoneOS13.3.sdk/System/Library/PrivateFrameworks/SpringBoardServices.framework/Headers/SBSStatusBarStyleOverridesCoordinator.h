/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : NSObject

{
    int _styleOverrides;
    id <SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;
@property (nonatomic, readonly) int styleOverrides;

- (void)dealloc;
- (void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_registrationInvalidated:(id)arg1;
- (void)setRegisteredStyleOverrides:(int)arg1 reply:(CDUnknownBlockType)arg2;

@end
