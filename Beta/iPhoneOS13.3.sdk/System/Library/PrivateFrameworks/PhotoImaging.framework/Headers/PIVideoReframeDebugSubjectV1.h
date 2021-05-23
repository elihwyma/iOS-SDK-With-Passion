/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIVideoReframeDebugSubject.h>

@interface PIVideoReframeDebugSubjectV1 : PIVideoReframeDebugSubject

{
    _Bool _usedInReframing;
    double _frameDominance;
    double _cameraCorrelation;
}

@property double frameDominance;
@property double cameraCorrelation;
@property _Bool usedInReframing;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
