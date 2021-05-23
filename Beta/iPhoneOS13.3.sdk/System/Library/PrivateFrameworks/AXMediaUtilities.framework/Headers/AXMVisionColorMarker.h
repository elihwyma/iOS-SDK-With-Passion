/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMVisionColor.h>

@class NSString;

@interface AXMVisionColorMarker : AXMVisionColor

{
    NSString *_localizedName;
}

@property (retain, nonatomic) NSString *localizedName;

+ (id)colorWithHueDegrees:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 localizedName:(id)arg4;
+ (id)allColorMarkers;
+ (id)closestMarkerToColor:(id)arg1 withMaximumThreshold:(double)arg2;

- (id)description;

@end
