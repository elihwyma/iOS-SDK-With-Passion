/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKMultiTypeQueryCursor, HKQueryAnchor, HKSample, NSArray, NSMutableArray, NSString;

@interface HKMultiTypeSampleIterator : NSObject

{
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    unsigned long long _bufferSize;
    unsigned long long _limit;
    HKHealthStore *_healthStore;
    unsigned long long _state;
    HKMultiTypeQueryCursor *_queryCursor;
    NSMutableArray *_buffer;
    HKSample *_current;
    unsigned long long _numberOfSamplesDelivered;
}

@property (copy, nonatomic, readonly) HKSample *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 bufferSize:(unsigned long long)arg6 limit:(unsigned long long)arg7 healthStore:(id)arg8;
- (_Bool)_queryForNextPageIfNecessaryWithError:(id *)arg1;
- (_Bool)advanceWithError:(id *)arg1;
- (id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 healthStore:(id)arg4;

@end
