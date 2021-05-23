/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@protocol NUArticleActivityOptionsProvider, NUURLHandling;

@interface NUArticleActivityManagerFactory : NSObject

{
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandling> _URLHandler;
    id <NUArticleActivityOptionsProvider> _optionsProvider;
}

@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (nonatomic, readonly) id <NUURLHandling> URLHandler;
@property (nonatomic, readonly) id <NUArticleActivityOptionsProvider> optionsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityProviderForHeadline:(id)arg1 reportConcernViewPresenter:(id)arg2 URLModifier:(id)arg3;
- (id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 optionsProvider:(id)arg5;

@end
