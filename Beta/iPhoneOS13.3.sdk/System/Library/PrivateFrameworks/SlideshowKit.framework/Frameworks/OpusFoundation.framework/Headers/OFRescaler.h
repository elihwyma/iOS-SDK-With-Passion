/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSArray;

@interface OFRescaler : NSObject

{
    NSArray *_segments;
    double _sharedCompressibility1;
    double _sharedCompressibility2;
    double _sharedExpandability1;
    double _sharedExpandability2;
    double _compressibility1Weight;
    double _compressibility2Weight;
    double _expandability1Weight;
    double _expandability2Weight;
    double _defaultDuration;
    double _minimumDuration;
    double _maximumDuration;
}

@property (readonly) double defaultDuration;
@property (readonly) double minimumDuration;
@property (readonly) double maximumDuration;

- (void)dealloc;
- (id)initWithSegments:(id)arg1;
- (double)computeSegmentDurations:(double *)arg1 forTotalDuration:(double)arg2;
- (double)computeSegmentDurations:(double *)arg1 forSpeedFactor:(double)arg2;

@end
