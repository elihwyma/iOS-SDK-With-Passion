/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, WBSMutableOrderedSet;

@interface WBSMutableOrderedDictionary : NSObject

{
    WBSMutableOrderedSet *_mutableOrderedSetOfKeys;
    NSMutableDictionary *_mutableDictionary;
    unsigned long long _maximumCount;
}

@property (nonatomic, readonly) NSArray *orderedKeys;
@property (nonatomic, readonly) NSArray *orderedValues;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithMaximumCount:(unsigned long long)arg1;

@end
