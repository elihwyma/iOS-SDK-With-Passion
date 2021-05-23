/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseTransaction, NSError;

@interface HDQuantitySampleSeriesDataEnumerator : NSObject

{
    HDDatabaseTransaction *_transaction;
    unsigned long long _bufferSize;
    struct deque<std::__1::tuple<double, double, float>, std::__1::allocator<std::__1::tuple<double, double, float>>> _data;
    _Bool _hasFetchedData;
    _Bool _hasFetchedAllData;
    _Bool _hasDeterminedSeriesVersion;
    _Bool _isVersion1;
    _Bool _hasDuration;
    long long _index;
    double _previousEndTime;
    NSError *_fatalError;
    unsigned char _UUIDBytes[16];
    long long _persistentID;
    long long _dataTypeCode;
    double _startTime;
    double _endTime;
    long long _count;
    long long _sourceID;
    long long _HFDKey;
    double _lastFetchedDatumTime;
    double _lastDatumTime;
    struct ObjectIdentifier _objectIdentifier;
}

@property (nonatomic) struct ObjectIdentifier objectIdentifier;
@property (nonatomic) _Bool hasFetchedData;
@property (nonatomic) double lastFetchedDatumTime;
@property (nonatomic) double lastDatumTime;
@property (nonatomic) _Bool hasFetchedAllData;
@property (nonatomic, readonly) _Bool done;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long dataTypeCode;
@property (nonatomic, readonly) unsigned char (*UUIDBytesPtr)[16];
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long sourceID;
@property (nonatomic, readonly) long long HFDKey;

- (id)description;
- (long long)compare:(id)arg1;
- (id).cxx_construct;
- (id)initWithTransaction:(id)arg1 persistentID:(long long)arg2 dataTypeCode:(long long)arg3 UUIDBytes:(unsigned char [16])arg4 startTime:(double)arg5 endTime:(double)arg6 count:(long long)arg7 sourceID:(long long)arg8 HFDKey:(long long)arg9 bufferSize:(unsigned long long)arg10;
- (_Bool)primeEnumeratorWithError:(id *)arg1;
- (double)nextDatumTime;
- (_Bool)enumerateDataToTime:(double)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_fillValueBufferWithError:(id *)arg1;
- (_Bool)_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3;
- (void)_unitTesting_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3 isLastDatum:(_Bool)arg4;

@end
