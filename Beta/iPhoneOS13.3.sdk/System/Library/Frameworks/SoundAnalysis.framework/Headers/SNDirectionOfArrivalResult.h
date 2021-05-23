/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

#import <SoundAnalysis/Swift-Protocol.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <Swift>

{
    float _azimuth;
    NSArray *_spatialSpectrum;
    CDStruct_e83c9415 timeRange;
}

@property (nonatomic) float azimuth;
@property (retain, nonatomic) NSArray *spatialSpectrum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;

- (void)setTimeRange:(CDStruct_e83c9415)arg1;

@end
