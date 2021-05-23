/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class DMFWebsitePolicyMonitor, NSMutableDictionary;

@protocol WBSDigitalHealthManagerDelegate;

@interface WBSDigitalHealthManager : NSObject

{
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsToUsageState;
    id <WBSDigitalHealthManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <WBSDigitalHealthManagerDelegate> delegate;
@property (readonly, getter=isDeviceManagementEnabled) _Bool deviceManagementEnabled;

+ (void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2;
+ (void)deleteUsageHistoryForURL:(id)arg1;
+ (void)deleteAllUsageHistory;
+ (void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObserving;
- (void)stopObserving;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateUsageTrackingForURL:(id)arg1 toState:(unsigned long long)arg2;
- (void)stopUsageTrackingForURL:(id)arg1;

@end
