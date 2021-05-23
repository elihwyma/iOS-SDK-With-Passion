/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressTransientOverlayViewController;

@interface SBLogoutProgressTestRecipe : NSObject

{
    NSMutableArray *_tasks;
    SBLogoutProgressTransientOverlayViewController *_logoutProgressTransientOverlayViewController;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}

@property (retain, nonatomic) SBLogoutProgressTransientOverlayViewController *logoutProgressTransientOverlayViewController;
@property (copy, nonatomic) NSArray *remainingApplications;
@property (retain, nonatomic) NSDictionary *remainingBlockingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)_defaultPendingApplications;
- (id)_defaultBlockingTasks;

@end
