/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSMutableSet;

@interface _DKLocationHistoryCache : NSObject

{
    NSMutableArray *_visits;
    NSMutableSet *_visitSet;
    double _earliestTime;
    double _latestTime;
    unsigned long long _index;
    _Bool _needsSorting;
}

@property (readonly) NSDate *oldestEntryDate;
@property (readonly) NSDate *newestExitDate;
@property (readonly) unsigned long long count;

- (id)init;
- (void)clear;
- (void)sortIfNecessary;
- (void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3;
- (id)lookupLocationIdforDate:(id)arg1;
- (void)clearOldest:(unsigned long long)arg1;

@end
