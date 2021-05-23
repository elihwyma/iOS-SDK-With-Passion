/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@protocol FCHeadlineProviding, NUArticleActivityOptionsProvider, NUReportConcernViewPresenter, NUURLHandling, NUURLModifying;

@interface NUArticleActivityManager : NSObject

{
    id <FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandling> _URLHandler;
    id <NUReportConcernViewPresenter> _reportConcernViewPresenter;
    id <NUURLModifying> _URLModifier;
    id <NUArticleActivityOptionsProvider> _optionsProvider;
}

@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (nonatomic, readonly) id <NUURLHandling> URLHandler;
@property (nonatomic, readonly) id <NUReportConcernViewPresenter> reportConcernViewPresenter;
@property (nonatomic, readonly) id <NUURLModifying> URLModifier;
@property (nonatomic, readonly) id <NUArticleActivityOptionsProvider> optionsProvider;
@property (nonatomic, readonly) id <FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activities;
- (id)activityItemSources;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5 reportConcernViewPresenter:(id)arg6 URLModifier:(id)arg7 optionsProvider:(id)arg8;
- (id)supportedActivities;
- (id)activityForType:(unsigned long long)arg1;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (CDUnknownBlockType)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)articleDislikedForHeadline:(id)arg1;
- (_Bool)articleLikedForHeadline:(id)arg1;
- (_Bool)articleSavedForHeadline:(id)arg1;
- (_Bool)channelMutedForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;

@end
