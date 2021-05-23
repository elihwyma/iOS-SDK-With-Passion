/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface SignpostSupportMachTimeTranslator : NSObject

{
    _Bool _isMonitoringSleepWake;
    NSMutableArray *_translationRanges;
    NSMutableArray *_startMachAbsoluteTimes;
    NSMutableArray *_startMachContinuousTimes;
    unsigned long long _maxEntries;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (nonatomic, readonly) NSMutableArray *translationRanges;
@property (nonatomic, readonly) NSMutableArray *startMachAbsoluteTimes;
@property (nonatomic, readonly) NSMutableArray *startMachContinuousTimes;
@property (nonatomic) unsigned long long maxEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property _Bool isMonitoringSleepWake;
@property (nonatomic, readonly) _Bool containsContinuousTimeJumps;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (id)serializableDictionaryRepresentation;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2;

@end
