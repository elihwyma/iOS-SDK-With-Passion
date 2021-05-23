/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSString;

@interface OFRescalableSegment : NSObject

{
    double _defaultDuration;
    double _minimumDuration;
    double _maximumDuration;
    double _compressibility;
    double _expandability;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property double defaultDuration;
@property double minimumDuration;
@property double maximumDuration;
@property double compressibility;
@property double expandability;

+ (id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
+ (id)nonRescalableSegmentWithDuration:(double)arg1;
+ (id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;
+ (id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;
+ (id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2;

@end
