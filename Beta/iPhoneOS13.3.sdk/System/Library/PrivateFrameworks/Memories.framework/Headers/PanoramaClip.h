/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KenBurnsClip.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PanoramaClip : KenBurnsClip

{
    unsigned long long _panoramaStyle;
    unsigned long long _panoramaDirection;
    double _panoramaTransitionDuration;
    double _burstAcrossSubClipDuration;
    NSArray *_detectedFaceRects;
    NSArray *_containedClips;
    KenBurnsClip *_templateClip;
}

@property (retain, nonatomic) NSArray *containedClips;
@property (retain, nonatomic) KenBurnsClip *templateClip;
@property (nonatomic, readonly) int projectFrameRate;
@property (nonatomic, readonly) double projectAspectRatio;
@property (nonatomic) unsigned long long panoramaStyle;
@property (nonatomic) unsigned long long panoramaDirection;
@property (nonatomic) double panoramaTransitionDuration;
@property (nonatomic) double burstAcrossSubClipDuration;
@property (retain, nonatomic) NSArray *detectedFaceRects;
@property (nonatomic, readonly) _Bool panSupportsDoublePan;
@property (nonatomic, readonly) _Bool panSupportsTriplePan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRandomNumberGenerator;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDuration:(int)arg1;
- (_Bool)isPano;
- (_Bool)isBurstAcrossStyleSuitable;
- (id)initWithKenBurnsClip:(id)arg1;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)takePropertiesFromKenBurnsClip:(id)arg1;
- (_Bool)expandsEditList;
- (struct CGSize)panoramaViewportSizeForImageSize:(struct CGSize)arg1;
- (id)descriptionOfPanoramaStyle;
- (id)descriptionOfPanoramaDirection;
- (id)buildClipsForSinglePanorama;
- (id)buildClipsForDoublePanorama;
- (id)buildClipsForTriplePanorama;
- (id)appendLetterboxZoomOutToClips:(id)arg1 zoomOutFromLastClip:(_Bool)arg2;
- (id)buildClipsForBurstAcrossPanorama;
- (void)computeBurstAcrossClipCount:(int *)arg1 minLeftEdge:(double *)arg2 maxLeftEdge:(double *)arg3;
- (void)equalizeDurationsOfClips:(id)arg1 totalDuration:(int)arg2;
- (void)lowLevelCustomizePanoramaKB:(id)arg1 panRight:(_Bool)arg2 leftLimit:(double)arg3 rightLimit:(double)arg4 allowLeftCrop:(_Bool)arg5 allowRightCrop:(_Bool)arg6 leftZoom:(double)arg7 rightZoom:(double)arg8;
- (void)offsetKenBurnsFramesForFaces:(id)arg1 panRight:(_Bool)arg2;
- (struct CGRect)rectEnclosingAllFacesWithFaceScale:(double)arg1 imageRect:(struct CGRect)arg2;
- (int)totalDurationOfClips:(id)arg1;
- (void)logDetectedFaceRects;

@end
