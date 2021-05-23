/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, UABestAppSuggestion;

@protocol UABestAppSuggestionManagerDelegate;

@interface UABestAppSuggestionManager : NSObject

{
    id <UABestAppSuggestionManagerDelegate> _delegate;
    _Bool _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    UABestAppSuggestion *_lastBestAppSuggestion;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property (weak) id <UABestAppSuggestionManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3;
- (void)startListeningForBestAppSuggestions;
- (void)stopListeningForBestAppSuggestions;
- (void)removeBestAppByUUID:(id)arg1 options:(id)arg2;
- (id)bestAppSuggestions:(long long)arg1;
- (id)bestAppSuggestion;
- (id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2;
- (_Bool)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (_Bool)determineBestAppWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)fetchAllNearbyAppSuggestions;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)launchAppWithBestAppSuggestion:(id)arg1;

@end
