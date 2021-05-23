/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemManager.h>

@class HFDataAnalyticsModule;

@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemManager : HFItemManager

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsModule *_dataAnalyticsModule;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) HFDataAnalyticsModule *dataAnalyticsModule;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;

@end
