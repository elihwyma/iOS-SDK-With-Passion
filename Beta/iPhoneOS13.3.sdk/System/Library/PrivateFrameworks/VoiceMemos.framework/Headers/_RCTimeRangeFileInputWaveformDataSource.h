/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/RCFileInputWaveformDataSource.h>

__attribute__((visibility("hidden")))
@interface _RCTimeRangeFileInputWaveformDataSource : RCFileInputWaveformDataSource

{
    _Bool _isDecomposedFragment;
}

@property (nonatomic) _Bool isDecomposedFragment;

- (void)saveGeneratedWaveformIfNecessary;

@end
