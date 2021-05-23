/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSArray, NSString, SNDirectionOfArrivalEstimator;

@protocol SNAnalyzing;

@interface SNEstimateDirectionOfArrivalRequest : NSObject <Swift>

{
    SNDirectionOfArrivalEstimator *_detector;
    NSArray *_spatialSpectrum;
}

@property (nonatomic, readonly) float azimuth;
@property (nonatomic, readonly) NSArray *spatialSpectrum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <SNAnalyzing> analyzer;

- (id)init;

@end
