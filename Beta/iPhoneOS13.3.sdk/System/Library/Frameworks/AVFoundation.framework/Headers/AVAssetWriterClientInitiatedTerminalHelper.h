/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterTerminalHelper.h>

__attribute__((visibility("hidden")))
@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper

{
    long long _terminalStatus;
}

- (long long)status;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;

@end
