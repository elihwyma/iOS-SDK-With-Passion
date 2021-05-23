/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSortedSampleIterator, HKSample, HKSortedQueryAnchor, NSArray, NSMutableArray, NSString;

@interface HDMultiTypeSortedSampleIterator : NSObject

{
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    long long _bufferSize;
    HDProfile *_profile;
    HKSortedQueryAnchor *_anchor;
    NSMutableArray *_iterators;
    HDSortedSampleIterator *_nextIterator;
    _Bool _isInitialized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) long long objectID;

+ (id)_upstreamIteratorsWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (_Bool)advanceWithError:(id *)arg1;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 profile:(id)arg4;
- (_Bool)_prepareIteratorsWithError:(id *)arg1;
- (id)initForCopying;
- (_Bool)restoreIteratorStateFromData:(id)arg1 error:(id *)arg2;
- (id)iteratorStateData;

@end
