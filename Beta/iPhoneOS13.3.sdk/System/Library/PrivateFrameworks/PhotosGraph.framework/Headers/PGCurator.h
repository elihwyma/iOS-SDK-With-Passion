/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface PGCurator : NSObject

{
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;

+ (unsigned long long)numberOfItemsToShaveOffWithNumberOfItems:(unsigned long long)arg1 maximumNumberOfItems:(unsigned long long)arg2 options:(id)arg3;
+ (unsigned long long)numberOfExtraItemsNeededWithNumberOfChosenItems:(unsigned long long)arg1 totalNumberOfItems:(unsigned long long)arg2 options:(id)arg3;
+ (unsigned long long)maximumNumberOfItemsToElectWithTotalNumberOfItems:(unsigned long long)arg1 spanningNumberOfDays:(double)arg2 options:(id)arg3;

- (id)init;
- (id)bestItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3;
- (id)newSemanticalDeduperWithOptions:(id)arg1;
- (id)newMovieDeduperWithOptions:(id)arg1;
- (void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5;
- (id)interestingItemsInItems:(id)arg1;
- (id)bestItemsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)_checkRequiredItemsWithIdentifiers:(id)arg1 inItems:(id)arg2;
- (id)deduplicatedItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)completeItems:(id)arg1 withFavoriteItemsFromItems:(id)arg2 upToNumberOfItems:(unsigned long long)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)completeItems:(id)arg1 withItems:(id)arg2 forPersonsWithIdentifiers:(id)arg3 options:(id)arg4 nonRemovableItems:(id)arg5 debugInfo:(id)arg6 progressBlock:(CDUnknownBlockType)arg7;
- (id)completedItems:(id)arg1 withNumberOfItems:(unsigned long long)arg2 fromAllItems:(id)arg3 avoidingItems:(id)arg4 options:(id)arg5 debugInfo:(id)arg6 progressBlock:(CDUnknownBlockType)arg7;
- (id)defaultItemSortDescriptors;
- (id)shaveItems:(id)arg1 downToNumberOfItems:(unsigned long long)arg2 options:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;

@end
