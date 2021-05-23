/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemUpdateOutcome.h>

@class NSDictionary, NSMutableDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome

{
    NSMutableDictionary *_mutableResults;
}

@property (retain, nonatomic) NSMutableDictionary *mutableResults;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) unsigned long long outcomeType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;
- (void)addResultsFromDictionary:(id)arg1;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (void)addResultsFromOutcome:(id)arg1;

@end
