/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PIValuesAtCapture : NSObject

{
    float _aperture;
    float _portraitStrength;
    NSNumber *_minimumAperture;
    NSNumber *_maximumAperture;
    unsigned long long _portraitMajorVersion;
    unsigned long long _portraitMinorVersion;
    CDStruct_6ed351db _versionInfo;
}

@property (nonatomic) float aperture;
@property (nonatomic) float portraitStrength;
@property (retain, nonatomic) NSNumber *minimumAperture;
@property (retain, nonatomic) NSNumber *maximumAperture;
@property (nonatomic) unsigned long long portraitMajorVersion;
@property (nonatomic) unsigned long long portraitMinorVersion;
@property (nonatomic) CDStruct_6ed351db versionInfo;

+ (id)valuesAtCaptureFromImageProperties:(id)arg1 error:(out id *)arg2;

- (id)description;

@end
