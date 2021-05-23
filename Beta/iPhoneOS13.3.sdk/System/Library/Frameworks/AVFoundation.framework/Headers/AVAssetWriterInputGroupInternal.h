/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterInput, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputGroupInternal : NSObject

{
    NSArray *inputs;
    AVAssetWriterInput *defaultInput;
    NSArray *provisionalInputs;
}

@end
