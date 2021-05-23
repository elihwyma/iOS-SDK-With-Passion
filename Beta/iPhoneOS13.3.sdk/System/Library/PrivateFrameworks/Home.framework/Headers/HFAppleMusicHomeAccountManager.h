/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface HFAppleMusicHomeAccountManager : NSObject

{
    NSMutableDictionary *_homeIdentifierToMediaAccountMapping;
    NSObject<OS_dispatch_queue> *_dataModelUpdateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueryQueue;
    NSMutableDictionary *_homeIdentifierToActiveAMSQueriesMapping;
    NSMutableDictionary *_homeIdentifierToFuturePromiseMapping;
}

@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToMediaAccountMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueryQueue;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToActiveAMSQueriesMapping;
@property (retain, nonatomic) NSMutableDictionary *homeIdentifierToFuturePromiseMapping;

+ (id)sharedInstance;

- (id)init;
- (void)applicationWillEnterForeground;
- (void)executeHomeMediaAccountFetchForAllHomes;
- (id)_fetchMediaAccountForHome:(id)arg1;
- (id)_futureForQueryLimitForHome:(id)arg1;
- (void)_finishPendingPromisesWithMediaAccountInfo:(id)arg1 forHome:(id)arg2;
- (id)mediaAccountForHomeIdentifier:(id)arg1;
- (id)executeHomeMediaAccountFetchForHome:(id)arg1;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getHomeMediaAccountForHome:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
