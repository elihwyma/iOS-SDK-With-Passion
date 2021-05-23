/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class AVAudioFile, SNAudioStreamAnalyzer;

@protocol OS_dispatch_queue;

@interface SNAudioFileAnalyzer : NSObject

{
    AVAudioFile *_audioFile;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _wasCancelled;
}

- (void)analyze;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)detailedDescription;
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeRequest:(id)arg1;
- (void)removeAllRequests;
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (void)cancelAnalysis;

@end
