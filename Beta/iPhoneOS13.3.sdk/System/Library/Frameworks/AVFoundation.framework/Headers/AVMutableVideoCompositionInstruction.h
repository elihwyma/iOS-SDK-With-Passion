/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction

{
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (retain, nonatomic) struct CGColor *backgroundColor;
@property (copy, nonatomic) NSArray *layerInstructions;
@property (nonatomic) _Bool enablePostProcessing;

+ (id)videoCompositionInstruction;

@end
