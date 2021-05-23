/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSArray, NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <Swift>

{
    long long _settingsID;
    unsigned int _processedOutputFormat;
    unsigned int _rawOutputFormat;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    unsigned int _bracketedImageCount;
    int _qualityPrioritization;
    int _HDRMode;
    int _digitalFlashMode;
    NSArray *_bravoConstituentImageDeliveryDeviceTypes;
}

@property (nonatomic) long long settingsID;
@property (nonatomic) unsigned int processedOutputFormat;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) unsigned int bracketedImageCount;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int HDRMode;
@property (nonatomic) int digitalFlashMode;
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)figCaptureStillImageSettingsRepresentation;

@end
