/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject

{
    NSMutableDictionary *_keyToMetrics;
    NSMutableDictionary *_locationToKeyList;
    NSString *_layoutKey;
}

@property (retain, nonatomic) NSMutableDictionary *keyToMetrics;
@property (retain, nonatomic) NSMutableDictionary *locationToKeyList;
@property (retain, nonatomic) NSString *layoutKey;

+ (id)metrics;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localDescription;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)supplementaryMetricsForKey:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)enumerateSupplementaryLocations:(CDUnknownBlockType)arg1;
- (id)keyListForLocation:(unsigned long long)arg1;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (void)enumerateSupplementaryMetricsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_gkDescription;
- (id)listForLocation:(unsigned long long)arg1;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned long long)arg2 globalRange:(struct _NSRange)arg3;
- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2;

@end
