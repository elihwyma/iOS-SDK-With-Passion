/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol _HKStreamingDestination;

@interface _HKCompressionEngine : NSObject

{
    int _operation;
    int _algorithm;
    NSMutableData *_sinkContent;
    id <_HKStreamingDestination> _destination;
    NSMutableData *_destinationBuffer;
    CDStruct_57889bad *_stream;
}

@property (nonatomic) int operation;
@property (nonatomic) int algorithm;
@property (weak, nonatomic) id <_HKStreamingDestination> destination;
@property (retain, nonatomic) NSMutableData *destinationBuffer;
@property (nonatomic) CDStruct_57889bad *stream;
@property (nonatomic, readonly) NSMutableData *sinkContent;

+ (id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3;
- (void)sourceContentFinished;
- (void)writeSourceContent:(id)arg1;
- (_Bool)_processIncomingData:(const void *)arg1 length:(unsigned long long)arg2 flags:(int)arg3;
- (void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2;
- (_Bool)_initializeStream;
- (void)_gatherReadSinkContent:(id)arg1;
- (unsigned long long)_deliverDestinationContent;

@end
