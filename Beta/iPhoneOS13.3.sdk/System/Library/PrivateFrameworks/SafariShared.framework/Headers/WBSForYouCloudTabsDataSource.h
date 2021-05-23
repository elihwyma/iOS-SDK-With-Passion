/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSForYouRecommendationMediatorDataSource.h>

@class NSObject, WBSCloudTabStore;

@protocol OS_dispatch_queue;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource

{
    WBSCloudTabStore *_tabsStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)_createInternalQueueIfNecessary;
- (id)initWithTabStore:(id)arg1;
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
