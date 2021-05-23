/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKUIAccountErrorsPETTracker : NSObject

+ (id)_rootUIErrorEventTracker;
+ (id)_actionableErrorDisplayedTracker;
+ (id)_unknownErrorDisplayedTracker;
+ (id)_offlineErrorDisplayedTracker;
+ (id)_otherErrorDisplayedTracker;
+ (id)_actionableErrorInteractedTracker;
+ (id)_refreshedWhileOfflineTracker;
+ (void)trackRootUIDisplayedError;
+ (void)trackRootUIInteractedWithError;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackRefreshedWhileOffline;

@end
