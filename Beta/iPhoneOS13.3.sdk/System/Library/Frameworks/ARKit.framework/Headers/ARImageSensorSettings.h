/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARVideoFormat, NSDictionary, NSString;

@interface ARImageSensorSettings : NSObject <Swift>

{
    _Bool _autoFocusEnabled;
    _Bool _mirrorVideoOutput;
    _Bool _visionDataOutputEnabled;
    _Bool _geometricDistortionCorrectionEnabled;
    _Bool _enabled;
    float _maxGainOverride;
    ARVideoFormat *_videoFormat;
    NSString *_metaData;
    NSDictionary *_visionDataOutputParameters;
}

@property (retain, nonatomic) ARVideoFormat *videoFormat;
@property (nonatomic) _Bool autoFocusEnabled;
@property (nonatomic) _Bool mirrorVideoOutput;
@property (nonatomic) _Bool visionDataOutputEnabled;
@property (nonatomic) float maxGainOverride;
@property (nonatomic) _Bool geometricDistortionCorrectionEnabled;
@property (copy, nonatomic) NSString *metaData;
@property (retain, nonatomic) NSDictionary *visionDataOutputParameters;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoFormat:(id)arg1;

@end
