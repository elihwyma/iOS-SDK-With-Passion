/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWIrisMovieInfo;

@interface BWIrisMovieInfoAndCallback : NSObject

{
    BWIrisMovieInfo *_info;
    CDUnknownBlockType _callback;
    _Bool _processed;
    double _overCaptureQualityScore;
    unsigned int _overCaptureQualityScoringVersion;
}

@property (nonatomic, readonly) BWIrisMovieInfo *info;
@property (nonatomic, readonly) CDUnknownBlockType callback;
@property (nonatomic) _Bool processed;
@property (nonatomic) double overCaptureQualityScore;
@property (nonatomic) unsigned int overCaptureQualityScoringVersion;

+ (id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)_initWithMovieInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
