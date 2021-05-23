/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCloudContext, FCKeyedOperationQueue, FCThreadSafeMutableSet, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol FCOperationThrottler, FCReadingListContentControllerObserving, OS_dispatch_group;

@interface FCReadingListContentController : NSObject <Swift>

{
    _Bool _hasBeenEnabled;
    id <FCReadingListContentControllerObserving> observer;
    NSArray *_articleIDsAvailableForOfflineReading;
    NSArray *_articleIDsOfInterest;
    NSDictionary *_holdInterestTokensByArticleID;
    FCKeyedOperationQueue *_articleContentDownloadKeyQueue;
    id <FCOperationThrottler> _updateHoldInterestTokensThrottler;
    NSMutableDictionary *_outstandingOperationsByArticleID;
    FCCloudContext *_context;
    NSObject<OS_dispatch_group> *_articleContentDownloadGroup;
    NSMutableSet *_fetchResults;
    FCThreadSafeMutableSet *_readingListAvailableForOfflineReading;
}

@property (copy, nonatomic) NSArray *articleIDsOfInterest;
@property (copy, nonatomic) NSDictionary *holdInterestTokensByArticleID;
@property (retain, nonatomic) FCKeyedOperationQueue *articleContentDownloadKeyQueue;
@property (retain, nonatomic) id <FCOperationThrottler> updateHoldInterestTokensThrottler;
@property (retain, nonatomic) NSMutableDictionary *outstandingOperationsByArticleID;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *articleContentDownloadGroup;
@property (retain, nonatomic) NSMutableSet *fetchResults;
@property (nonatomic) _Bool hasBeenEnabled;
@property (retain, nonatomic) FCThreadSafeMutableSet *readingListAvailableForOfflineReading;
@property (weak, nonatomic) id <FCReadingListContentControllerObserving> observer;
@property (copy, nonatomic) NSArray *articleIDsAvailableForOfflineReading;
@property (nonatomic, readonly) NSSet *readingListForOfflineReading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (_Bool)isArticleAvailableForOfflineReading:(id)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateInterestsIfNeeded;
- (void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
