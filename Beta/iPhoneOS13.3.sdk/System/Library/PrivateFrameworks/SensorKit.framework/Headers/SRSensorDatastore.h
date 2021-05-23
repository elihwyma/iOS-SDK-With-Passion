/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class SRDefaults, SRFrameStore;

@interface SRSensorDatastore : NSObject

{
    unsigned long long _permission;
    unsigned long long _maxAllowedPages;
    float _segmentResizeFactor;
    SRDefaults *_defaults;
    SRFrameStore *_framesStore;
    SRFrameStore *_metadata;
}

@property (retain) SRFrameStore *framesStore;
@property (retain) SRFrameStore *metadata;
@property (readonly) double startTimeOfCurrentSegment;

- (void)dealloc;
- (id)initForPruningWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initForWritingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;
- (_Bool)writeSampleBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)writeMetadataBytes:(const void *)arg1 length:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)syncMappedFiles;
- (id)initForReadingWithSampleFile:(id)arg1 metadataFile:(id)arg2 defaults:(id)arg3;
- (void)fetchSamplesFrom:(double)arg1 to:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithSampleFile:(id)arg1 metadataFile:(id)arg2 permission:(unsigned long long)arg3 defaults:(id)arg4;
- (id)findClosestMetadataFrameTo:(double)arg1 offset:(unsigned long long)arg2;
- (void)fetchMetadataWithTime:(double)arg1 offset:(unsigned long long)arg2 metadataFrame:(void **)arg3 next:(void **)arg4;

@end
