/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@protocol PXGadgetRankStorage;

@interface PXForYouGadgetPriorityManager : NSObject

{
    _Bool _needsSorting;
    NSDate *_baseNewDate;
    long long _sortingAlgorithm;
    NSMutableDictionary *_currentEntries;
    id <PXGadgetRankStorage> _rankStorage;
    long long _nestedRegistration;
}

@property (nonatomic, readonly) NSMutableDictionary *currentEntries;
@property (nonatomic, readonly) id <PXGadgetRankStorage> rankStorage;
@property (nonatomic) _Bool needsSorting;
@property (nonatomic) long long nestedRegistration;
@property (retain, nonatomic) NSDate *baseNewDate;
@property (nonatomic) long long sortingAlgorithm;

- (id)initWithStorage:(id)arg1;
- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)startRegistration;
- (void)endRegistration;
- (void)registerRankable:(id)arg1;
- (_Bool)invalidateRanks;
- (void)resetToDefaultPriorities;
- (void)_sortCurrentEntriesIfNeeded;
- (void)_sortCurrentEntries;
- (void)_splitCurrentEntriesIntoNew:(id)arg1 andOld:(id)arg2;
- (void)_persistSortedEntries:(id)arg1;
- (id)_sortingKeyForOldEntries;

@end
