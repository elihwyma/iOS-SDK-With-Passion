/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCPFaceRecognitionTask : NSOperation

{
    NSArray *_sessions;
}

- (id)init;
- (id)recognizeFaces:(id)arg1;
- (id)recognizeFace:(id)arg1;

@end
