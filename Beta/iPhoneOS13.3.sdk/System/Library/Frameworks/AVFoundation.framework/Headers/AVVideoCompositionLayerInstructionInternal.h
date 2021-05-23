/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionLayerInstructionInternal : NSObject

{
    int trackID;
    NSMutableArray *transformRamps;
    NSMutableArray *opacityRamps;
    NSMutableArray *cropRectangleRamps;
}

@end
