/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CMStrideCalibrationHistory : NSObject

{
    NSArray *_calibrationTracks;
    NSArray *_rawSpeedToKValueBins;
    NSArray *_stepCadenceToStrideLengthBins;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *calibrationTracks;
@property (retain, nonatomic) NSArray *rawSpeedToKValueBins;
@property (retain, nonatomic) NSArray *stepCadenceToStrideLengthBins;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithCalibrationTracks:(id)arg1 rawSpeedToKValueBins:(id)arg2 stepCadenceToStrideLengthBins:(id)arg3;

@end
