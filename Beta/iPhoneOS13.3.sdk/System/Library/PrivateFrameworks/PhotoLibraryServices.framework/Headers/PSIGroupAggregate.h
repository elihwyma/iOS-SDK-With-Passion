/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIGroup;

@protocol OS_dispatch_queue;

@interface PSIGroupAggregate : NSObject

{
    NSArray *_searchTokens;
    NSMutableArray *_groupAggregateItems;
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_aggregateItemPool;
    unsigned long long _filenameGroupCount;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
    NSString *_transientToken;
    PSIGroup *_filenameGroupInAggregate;
}

@property (nonatomic, readonly) NSArray *searchTokens;
@property (copy, nonatomic) NSString *transientToken;
@property (nonatomic, readonly) PSIGroup *filenameGroupInAggregate;

- (void)pop;
- (id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2;
- (struct _NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 useNormalizedString:(_Bool)arg3 extendingSearchRange:(_Bool)arg4 matchingFullToken:(_Bool)arg5 excludingRanges:(id)arg6;
- (_Bool)pushGroup:(id)arg1;
- (id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3;
- (_Bool)_verifySortedGroupIdsUnique;
- (struct __CFArray *)_newSortedGroupIds;
- (id)newGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (id)newGroupResult;

@end
