/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemModule.h>

@class HFDataAnalyticsLogItemProvider;

@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsModule : HFItemModule

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFDataAnalyticsLogItemProvider *_logItemProvider;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) HFDataAnalyticsLogItemProvider *logItemProvider;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)buildSectionsWithDisplayedItems:(id)arg1;

@end
