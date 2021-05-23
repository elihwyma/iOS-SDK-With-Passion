/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstImageFaceAnalysisContext : NSObject

{
    _Bool forceFaceDetectionEnable;
    _Bool _forceFaceDetailsEnable;
    int _faceIdCounter;
    int _numFramesSinceFullFaceCore;
    int _numFramesNoFaces;
    int _lastFaceIndex;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
    NSMutableDictionary *_curConfig;
    NSMutableDictionary *_faceIdMapping;
    NSMutableDictionary *_renameMapping;
    NSMutableArray *_faceInfoArray;
    NSMutableArray *_faceTimestampArray;
    double _latestImageTimestamp;
}

@property (retain) NSMutableDictionary *curConfig;
@property (retain) NSMutableDictionary *faceIdMapping;
@property (retain) NSMutableDictionary *renameMapping;
@property int faceIdCounter;
@property (retain) NSMutableArray *faceInfoArray;
@property int numFramesSinceFullFaceCore;
@property int numFramesNoFaces;
@property (retain) NSMutableArray *faceTimestampArray;
@property double latestImageTimestamp;
@property int lastFaceIndex;
@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property _Bool forceFaceDetectionEnable;
@property _Bool forceFaceDetailsEnable;
@property double latestFaceTimestamp;
@property int version;

- (id)initWithVersion:(id)arg1;
- (struct CGRect)padRoiRect:(struct CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (id)findOverlappingFaceStat:(struct CGRect)arg1 imageStat:(id)arg2;
- (void)addFaceToArray:(id)arg1;
- (int)findFacesInImage:(struct __CVBuffer *)arg1 imageStat:(id)arg2;
- (void)calculateFaceFocusInImage:(struct __CVBuffer *)arg1 imageStat:(id)arg2;
- (void)calcFaceScores:(id)arg1;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)extractFacesFromMetadata:(id)arg1;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)dumpFaceInfoArray;
- (struct CGRect)calculateFaceCoreROI:(struct CGRect)arg1 imageStat:(id)arg2 needSWFaceDetection:(_Bool *)arg3;
- (id)_filterFacesToProcess:(id)arg1 imageSize:(struct CGSize)arg2 imageStat:(id)arg3;

@end
