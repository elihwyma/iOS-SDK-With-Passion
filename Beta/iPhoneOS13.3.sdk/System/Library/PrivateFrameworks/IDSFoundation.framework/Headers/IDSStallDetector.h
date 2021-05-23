/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IDSStallDetector : NSObject

{
    _Bool _verboseLogging;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _stallDetectedBlock;
    CDUnknownBlockType _stallWarningBlock;
    unsigned long long _consumeDelayThreshold;
    double _byteMovementDelayThreshold;
    NSMutableArray *_bytesHistory;
    NSMutableArray *_bytesTimestamps;
}

@property (nonatomic) _Bool verboseLogging;
@property (nonatomic) unsigned long long consumeDelayThreshold;
@property (nonatomic) double byteMovementDelayThreshold;

+ (id)newDetectorWithName:(id)arg1 stallDetectedBlock:(CDUnknownBlockType)arg2 stallWarningBlock:(CDUnknownBlockType)arg3;
+ (id)detectorWithName:(id)arg1;
+ (void)removeDetectorWithName:(id)arg1;

- (void)reset;
- (_Bool)consumeTimeCheckForEvent:(id)arg1 produceTime:(unsigned long long)arg2 consumeTime:(unsigned long long)arg3;
- (_Bool)byteMovementCheckForEvent:(id)arg1;
- (void)produceBytes:(int)arg1;
- (void)consumeBytes:(int)arg1;
- (void)forceTriggerStallDetectedBlockWithEventName:(id)arg1;

@end
