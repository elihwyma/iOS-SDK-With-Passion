/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNDetectSignalThresholdRequestImpl;

@protocol SNAnalyzing;

@interface SNDetectSignalThresholdRequest : NSObject <Swift>

{
    SNDetectSignalThresholdRequestImpl *_detector;
}

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double magnitudeThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;

@end
