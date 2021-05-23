/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionCoreAnimationToolInternal : NSObject

{
    CALayer *animationLayer;
    int auxiliaryTrackID;
    NSArray *postProcessingVideoLayers;
    long long way;
}

@end
