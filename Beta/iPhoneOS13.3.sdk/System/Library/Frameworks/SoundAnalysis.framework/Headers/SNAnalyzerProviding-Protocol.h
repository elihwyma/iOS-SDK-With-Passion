/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <SoundAnalysis/Swift-Protocol.h>

@protocol SNAnalyzing;

@protocol SNAnalyzerProviding <Swift>

@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

@end
