/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXMLayoutItem : NSObject

@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double top;
@property (nonatomic, readonly) double bottom;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double left;
@property (nonatomic, readonly) double right;
@property (nonatomic, readonly) struct CGRect normalizedFrame;

+ (struct CGRect)boundingFrameForItems:(id)arg1;
+ (struct CGRect)normalizedBoundingFrameForItems:(id)arg1;

- (id)description;
- (long long)_metricTypeForMetric:(long long)arg1;
- (double)_floatValueForMetric:(long long)arg1;
- (struct CGRect)_rectValueForMetric:(long long)arg1;
- (_Bool)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4;

@end
