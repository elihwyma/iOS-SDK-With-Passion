/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper

{
    NSArray *_finishWritingOperations;
    NSOperation *_transitionToTerminalStatusOperation;
}

@property (nonatomic, readonly) NSOperation *transitionToTerminalStatusOperation;

- (void)dealloc;
- (long long)status;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2;
- (void)_finishWritingOperationsDidFinish;

@end
