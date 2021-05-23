/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, _DKEvent;

@interface _DKSyncWindow : NSObject

{
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) _DKEvent *event;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)completedWindowsWithSortedEvents:(id)arg1 windows:(id)arg2 fetchOrder:(long long)arg3 fillOrder:(unsigned long long)arg4 hitLimit:(_Bool)arg5;
+ (id)unionOfSortedSyncWindows:(id)arg1;
+ (id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;
+ (id)lastWindowMissingFromSortedNormalizedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3;
+ (id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)completedWindowsFromWindows:(id)arg1 firstEvent:(id)arg2 lastEvent:(id)arg3 fetchOrder:(long long)arg4 fillOrder:(unsigned long long)arg5 hitLimit:(_Bool)arg6;
+ (id)sortedUnionOfSortedWindows:(id)arg1 andSortedWindows:(id)arg2;
+ (id)windowsMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2;
+ (id)dictionaryArrayFromWindows:(id)arg1;
+ (id)windowsFromDictionaryArray:(id)arg1;
+ (id)linearDescriptionOfSortedWindows:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)unionWithSyncWindow:(id)arg1;
- (_Bool)isEqualToWindow:(id)arg1;

@end
