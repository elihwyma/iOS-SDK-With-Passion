//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseTransaction, NSError;

@interface HDQuantitySampleSeriesDataEnumerator : NSObject
{
    HDDatabaseTransaction *_transaction;
    NSUInteger _bufferSize;
    struct deque<std::__1::tuple<double, double, float>, std::__1::allocator<std::__1::tuple<double, double, float>>> _data;
    BOOL _hasFetchedData;
    BOOL _hasFetchedAllData;
    BOOL _hasDeterminedSeriesVersion;
    BOOL _isVersion1;
    BOOL _hasDuration;
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

@property(nonatomic) BOOL hasFetchedAllData; // @synthesize hasFetchedAllData=_hasFetchedAllData;
@property(nonatomic) double lastDatumTime; // @synthesize lastDatumTime=_lastDatumTime;
@property(nonatomic) double lastFetchedDatumTime; // @synthesize lastFetchedDatumTime=_lastFetchedDatumTime;
@property(nonatomic) BOOL hasFetchedData; // @synthesize hasFetchedData=_hasFetchedData;
@property(nonatomic) struct ObjectIdentifier objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) long long HFDKey; // @synthesize HFDKey=_HFDKey;
@property(readonly, nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long dataTypeCode; // @synthesize dataTypeCode=_dataTypeCode;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)_unitTesting_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3 isLastDatum:(BOOL)arg4;
- (BOOL)_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3;
- (BOOL)_fillValueBufferWithError:(id )arg1;
- (id)description;
@property(readonly, nonatomic) unsigned char (UUIDBytesPtr)[16];
@property(readonly, nonatomic) BOOL done;
- (long long)compare:(id)arg1;
- (BOOL)enumerateDataToTime:(double)arg1 error:(id )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)primeEnumeratorWithError:(id )arg1;
- (double)nextDatumTime;
- (id)initWithTransaction:(id)arg1 persistentID:(long long)arg2 dataTypeCode:(long long)arg3 UUIDBytes:(unsigned char [16])arg4 startTime:(double)arg5 endTime:(double)arg6 count:(long long)arg7 sourceID:(long long)arg8 HFDKey:(long long)arg9 bufferSize:(NSUInteger)arg10;

@end

