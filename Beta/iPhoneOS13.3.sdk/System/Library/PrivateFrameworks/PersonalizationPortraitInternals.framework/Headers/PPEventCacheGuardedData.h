/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface PPEventCacheGuardedData : NSObject

{
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    unsigned long long _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
}

@end
