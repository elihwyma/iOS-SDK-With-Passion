/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequestConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNAlignFaceRectangleRequestConfiguration : VNRequestConfiguration

{
    NSArray *_inputFaceObservations;
}

@property (copy, nonatomic) NSArray *inputFaceObservations;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
