/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionInternal : NSObject

{
    unsigned long long changeSeed;
    NSString *builtInCompositorName;
    Class customCompositorClass;
    CDStruct_1b6d18a9 frameDuration;
    int sourceTrackIDForFrameTiming;
    struct CGSize renderSize;
    float renderScale;
    NSString *colorPrimaries;
    NSString *colorYCbCrMatrix;
    NSString *colorTransferFunction;
    NSArray *instructions;
    _Bool auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
}

@end
