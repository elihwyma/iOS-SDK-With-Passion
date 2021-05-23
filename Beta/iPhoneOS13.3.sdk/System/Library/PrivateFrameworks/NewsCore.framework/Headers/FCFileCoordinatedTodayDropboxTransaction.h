/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <Swift>

{
    unsigned long long _transactionType;
    NSArray *_insertedOrUpdatedHistoryItems;
    NSSet *_deletedArticleIDs;
}

@property (nonatomic) unsigned long long transactionType;
@property (copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems;
@property (copy, nonatomic) NSSet *deletedArticleIDs;

+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2;
+ (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
+ (id)transactionOfIdentity;
+ (id)transactionToClearSeenArticles;
+ (id)collapsedTransactionOfTransactions:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3;
- (void)_mergeItem:(id)arg1 intoItem:(id)arg2;
- (CDUnknownBlockType)todayPrivateDataAccessor;

@end
