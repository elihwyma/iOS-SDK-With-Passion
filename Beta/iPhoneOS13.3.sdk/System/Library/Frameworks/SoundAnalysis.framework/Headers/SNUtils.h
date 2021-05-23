/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNUtils : NSObject

+ (int)modelSampleRate:(id)arg1 orDefaultRate:(int)arg2;
+ (int)modelBlockSize:(id)arg1;
+ (id)vggishFeatureEmbeddingInputShape;
+ (int)numberOfElements:(id)arg1;
+ (id)vggishFeatureEmbeddingOutputShape;
+ (id)vggishFrontEndProcessingModelDescription;
+ (id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned int)arg2;
+ (id)vggishFrontEndProcessingInputShape;
+ (id)vggishFrontEndProcessingOutputShape;
+ (void)silenceUnfilledFramesInBuffer:(id)arg1;
+ (void)copyAudioBufferList:(struct AudioBufferList *)arg1 to:(struct AudioBufferList *)arg2 frameCount:(unsigned int)arg3 bytesPerFrame:(unsigned int)arg4;
+ (int)modelInputBlockSize:(id)arg1;
+ (int)modelOutputBlockSize:(id)arg1;

@end
