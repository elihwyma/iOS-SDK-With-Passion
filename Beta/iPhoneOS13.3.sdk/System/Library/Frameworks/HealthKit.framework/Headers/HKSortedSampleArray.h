/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject

{
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
    NSSortDescriptor *_sortDescriptor;
}

@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;

- (id)init;
- (id)description;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1;
- (_Bool)removeSampleAtIndex:(long long)arg1;
- (_Bool)removeSample:(id)arg1;
- (_Bool)insertSamples:(id)arg1;
- (id)sampleAtIndex:(long long)arg1;
- (id)allSamples;
- (_Bool)removeSamplesWithUUIDs:(id)arg1;
- (void)removeAllSamples;
- (id)sampleEnumerator;
- (id)reverseSampleEnumerator;

@end
