/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSNovDetector : NSObject

{
    void *_novDetect;
}

- (void)dealloc;
- (void)reset;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)resetBest;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;
- (id)getOptionValue:(id)arg1;

@end
