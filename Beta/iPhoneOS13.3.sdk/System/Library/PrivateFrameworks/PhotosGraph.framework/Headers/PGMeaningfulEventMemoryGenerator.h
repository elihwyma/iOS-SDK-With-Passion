/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSString;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator

{
    _Bool _skipsCollectionTitle;
    NSDate *_lowerBoundLocalDate;
    unsigned long long _eventType;
    unsigned long long _meaning;
    NSString *_meaningfulEventUUID;
    unsigned long long _memoryCategory;
}

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long meaning;
@property (retain, nonatomic) NSString *meaningfulEventUUID;
@property (nonatomic) _Bool skipsCollectionTitle;
@property (nonatomic) unsigned long long memoryCategory;

- (id)initWithController:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;

@end
