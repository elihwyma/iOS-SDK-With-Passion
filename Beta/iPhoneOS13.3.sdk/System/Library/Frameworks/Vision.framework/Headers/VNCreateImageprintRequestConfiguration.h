/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration

{
    NSNumber *_timeStamp;
}

@property (copy, nonatomic) NSNumber *timeStamp;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
