/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class FCRFaceDetector, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstImageFaceAnalysisContext : NSObject

{
    NSMutableDictionary *curConfig;
    NSMutableDictionary *faceIdMapping;
    NSMutableDictionary *renameMapping;
    int faceIdCounter;
    NSMutableArray *faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector *faceDetector;
    NSMutableArray *faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
    _Bool forceFaceDetectionEnable;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
}

@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property _Bool forceFaceDetectionEnable;
@property double latestFaceTimestamp;
@property int version;

- (void)dealloc;
- (id)initWithVersion:(id)arg1;
- (struct CGRect)padRoiRect:(struct CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (void)setupFaceDetector;
- (struct CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(_Bool *)arg3;
- (id)findOverlappingFaceStat:(struct CGRect)arg1 imageStat:(id)arg2;
- (void)addFaceToArray:(id)arg1;
- (int)findFacesInImage:(id)arg1 imageStat:(id)arg2;
- (void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2;
- (void)calcFaceScores:(id)arg1;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)extractFacesFromMetadata:(id)arg1;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)dumpFaceInfoArray;

@end
