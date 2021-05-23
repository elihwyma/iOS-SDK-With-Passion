/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSMutableArray;

@interface BWMotionDataTimeMachine : NSObject

{
    NSMutableArray *_cache;
    NSArray *_motionMetadataKeys;
    NSArray *_sampleBufferAttachmentKeys;
    unsigned long long _earliestAvailableMotionDataSerialNumber;
    unsigned long long _latestAvailableMotionDataSerialNumber;
    unsigned long long _capacity;
    _Bool _synchronizedSlaveMotionDataCachingEnabled;
    _Bool _cacheEntireMetadataDictionary;
    struct OpaqueFigSimpleMutex *_propertyMutex;
}

@property (readonly) _Bool synchronizedSlaveMotionDataCachingEnabled;
@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber;
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber;

+ (void)initialize;

- (void)dealloc;
- (id)copyMotionDataForStartingSerialNumber:(unsigned long long)arg1 endingSerialNumber:(unsigned long long)arg2;
- (id)copyMotionDataForSerialNumber:(unsigned long long)arg1;
- (unsigned long long)addMotionDataToCacheForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 synchronizedSlaveMotionDataCachingEnabled:(_Bool)arg2 cacheEntireMetadataDictionary:(_Bool)arg3;
- (id)_copyMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
