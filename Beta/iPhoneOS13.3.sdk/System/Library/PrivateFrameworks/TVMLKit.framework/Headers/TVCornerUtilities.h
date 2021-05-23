/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVCornerUtilities : NSObject

+ (struct TVCornerRadii)radiiFromRadius:(double)arg1;
+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2;
+ (_Bool)radiiIsZero:(struct TVCornerRadii)arg1;
+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2 isContinuous:(_Bool)arg3;
+ (double)radiusFromCornerRadii:(struct TVCornerRadii)arg1;
+ (struct TVCornerRadii)flipCGOriginRadii:(struct TVCornerRadii)arg1;

@end
