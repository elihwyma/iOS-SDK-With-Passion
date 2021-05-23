/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterTerminalHelper.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper

{
    NSError *_terminalError;
}

- (void)dealloc;
- (id)error;
- (long long)status;
- (void)finishWriting;
- (void)flush;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)setFinishWritingDelegate:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;

@end
