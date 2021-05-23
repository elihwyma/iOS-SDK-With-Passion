/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnit.h>

@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic, readonly) NSURL *dspGraphURL;
@property (nonatomic, readonly) NSURL *auProcessingStripURL;

- (id)init;
- (_Bool)loadAudioDSPManager;
- (_Bool)loadDSPGraphAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id *)arg2;

@end
