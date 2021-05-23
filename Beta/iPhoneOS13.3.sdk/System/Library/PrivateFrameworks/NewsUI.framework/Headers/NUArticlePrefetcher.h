/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSString, NSTimer;

@protocol NUArticleDataProviderFactory, NUArticleFactory;

@interface NUArticlePrefetcher : NSObject

{
    id <NUArticleFactory> _articleFactory;
    id <NUArticleDataProviderFactory> _articleDataProviderFactory;
    FCKeyedOperationQueue *_prefetchQueue;
    NSMutableDictionary *_articleDataProviderCache;
    NSCountedSet *_interestedArticleIDs;
    NSMutableDictionary *_interestModificationDates;
    unsigned long long _highWaterMark;
    NSTimer *_reprocessTimer;
}

@property (retain, nonatomic) id <NUArticleFactory> articleFactory;
@property (retain, nonatomic) id <NUArticleDataProviderFactory> articleDataProviderFactory;
@property (retain, nonatomic) FCKeyedOperationQueue *prefetchQueue;
@property (retain, nonatomic) NSMutableDictionary *articleDataProviderCache;
@property (retain, nonatomic) NSCountedSet *interestedArticleIDs;
@property (retain, nonatomic) NSMutableDictionary *interestModificationDates;
@property (nonatomic) unsigned long long highWaterMark;
@property (retain, nonatomic) NSTimer *reprocessTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)prefetchedArticleDataProviderForArticleID:(id)arg1;
- (void)addPrefetchInterestInArticleID:(id)arg1;
- (void)removePrefetchInterestInArticleID:(id)arg1;
- (id)initWithArticleFactory:(id)arg1 articleDataProviderFactory:(id)arg2;
- (void)_revisitSuspendedState;
- (void)_didChangeInterestedArticleIDs;
- (void)_reprocessInterestedArticleIDs;
- (void)_flushUnusedDataProvidersIfNeeded;

@end
