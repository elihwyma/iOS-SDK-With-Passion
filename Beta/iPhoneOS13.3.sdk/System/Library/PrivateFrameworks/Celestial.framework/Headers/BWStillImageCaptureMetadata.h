/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@interface BWStillImageCaptureMetadata : NSObject

{
    int _snrType;
    float _snr;
    int _deviceType;
    NSArray *_slaveFocalLengths;
    NSArray *_slaveLensFNumbers;
    float _totalZoomFactor;
}

@property (nonatomic) int snrType;
@property (nonatomic) float snr;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSArray *slaveFocalLengths;
@property (retain, nonatomic) NSArray *slaveLensFNumbers;
@property (nonatomic) float totalZoomFactor;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
