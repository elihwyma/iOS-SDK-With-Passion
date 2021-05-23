/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSampleQueryDescription, HKSample, HKSortedQueryAnchor, NSArray, NSError, NSSet, NSString;

@interface HDSortedSampleIterator : NSObject

{
    HDSampleQueryDescription *_sampleQueryDescription;
    NSArray *_sortDescriptors;
    HKSortedQueryAnchor *_anchor;
    long long _bufferSize;
    NSSet *_restrictedSourceEntities;
    HDProfile *_profile;
    NSError *_lastError;
    _Bool _isComplete;
    struct vector<std::__1::tuple<long long, HKSample *>, std::__1::allocator<std::__1::tuple<long long, HKSample *>>> _buffer;
    struct tuple<long long, HKSample *> _current;
}

@property (copy, nonatomic, readonly) HKSortedQueryAnchor *nextAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) long long objectID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (id).cxx_construct;
- (_Bool)_queryForNextPageIfNecessaryWithError:(id *)arg1;
- (_Bool)advanceWithError:(id *)arg1;
- (id)initWithSampleQueryDescription:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5;

@end
