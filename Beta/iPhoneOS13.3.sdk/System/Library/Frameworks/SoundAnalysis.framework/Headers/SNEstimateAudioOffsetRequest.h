/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSString, SNAudioOffsetEstimator;

@protocol SNAnalyzing;

@interface SNEstimateAudioOffsetRequest : NSObject <Swift>

{
    SNAudioOffsetEstimator *_detector;
}

@property (nonatomic, readonly) double minimumObservableOffset;
@property (nonatomic, readonly) double maximumObservableOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;
- (double)offset;

@end
