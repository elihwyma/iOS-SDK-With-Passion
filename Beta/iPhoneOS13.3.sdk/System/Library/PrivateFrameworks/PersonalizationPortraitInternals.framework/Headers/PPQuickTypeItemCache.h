/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface PPQuickTypeItemCache : NSObject

{
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}

- (id)init;
- (void)clear;
- (id)entryWithKey:(id)arg1;
- (void)setEntry:(id)arg1 key:(id)arg2;

@end
