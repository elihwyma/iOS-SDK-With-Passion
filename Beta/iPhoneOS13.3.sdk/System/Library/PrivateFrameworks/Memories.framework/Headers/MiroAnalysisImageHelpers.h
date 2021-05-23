/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class CIDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MiroAnalysisImageHelpers : NSObject

{
    CIDetector *_faceDetector;
    _Bool _faceTrackingEnabled;
    CDStruct_1b6d18a9 _recordingStartTime;
    NSMutableDictionary *_currentFaceRangesKeyedByFaceID;
    unsigned long long _exifOrientation;
    NSMutableDictionary *_shotTypeToSampleCountMap;
    long long _projectNaturalFrameRate;
}

@property (nonatomic) long long projectNaturalFrameRate;

+ (long long)imageOrientationForEXIFOrientation:(unsigned long long)arg1;
+ (unsigned long long)exifOrientationForUIImageOrientation:(long long)arg1;
+ (unsigned long long)exifOrientationForVideoTrack:(id)arg1;

- (id)init;
- (void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)_shotTypeForFaceBoundsArray:(id)arg1;
- (long long)_positionForFaceBounds:(struct CGRect)arg1;
- (void)_updateFaceRangeWithFaceID:(long long)arg1 detectionTime:(CDStruct_1b6d18a9)arg2 facePosition:(long long)arg3 flags:(unsigned long long)arg4 faceBounds:(struct CGRect)arg5;
- (void)_updateShotTypeMapWithFaceBoundsArray:(id)arg1;
- (void)_outputFaceRangesWithRemovedFaceIDs:(id)arg1 outputtedFaceRanges:(id *)arg2;
- (long long)_primaryShotType;
- (id)_makeColorAnalysisDictionary:(id)arg1 forImageBounds:(struct CGRect)arg2;
- (id)_analyzeColorsInImage:(id)arg1;
- (_Bool)_startOutputtingFaceRangesWithStartTime:(CDStruct_1b6d18a9)arg1 orientation:(unsigned long long)arg2;
- (id)_analyzeColorsInVideoFrame:(struct CGImage *)arg1 withOrientation:(unsigned long long)arg2;
- (_Bool)_processOutputtingFaceRangeWithCGImage:(struct CGImage *)arg1 detectionTime:(CDStruct_1b6d18a9)arg2 faceRanges:(id *)arg3;
- (void)_stopOutputtingFaceRangesWithEndTime:(CDStruct_1b6d18a9)arg1 lastFaceRanges:(id *)arg2;
- (void)processUIImage:(id)arg1 options:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
