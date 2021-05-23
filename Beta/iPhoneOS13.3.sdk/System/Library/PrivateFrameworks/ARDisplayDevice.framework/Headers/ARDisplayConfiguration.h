/*
 Image: /System/Library/PrivateFrameworks/ARDisplayDevice.framework/ARDisplayDevice
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSNumber, NSString;

@interface ARDisplayConfiguration : NSObject

{
    NSString *_vendorName;
    NSString *_productName;
    NSString *_version;
    NSArray *_pointOfView;
    long long _deviceOrientation;
    long long _displayMode;
    long long _markerAnchor;
    NSNumber *_markerPosition;
    long long _verticalAlignmentAnchor;
    NSNumber *_verticalAlignmentPosition;
    NSString *_vendorID;
    NSString *_productID;
    NSDate *_date;
    long long _heldState;
    unsigned long long _colorFormat;
    unsigned long long _depthFormat;
    long long _configVersion;
    long long _cameraOrientation;
    double _drawableWidth;
    double _drawableHeight;
    NSNumber *_markerPoint;
    NSNumber *_verticalMarkerPoint;
    double _pixelWidth;
    double _pixelHeight;
    double _width;
    double _height;
    double _diagonal;
    MISSING_TYPE *_reflectedWhitePoint;
    MISSING_TYPE *_transmittedWhitePoint;
    CDStruct_14d5dc5e _appPoint;
}

@property (retain, nonatomic) NSString *vendorID;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long heldState;
@property (nonatomic) unsigned long long colorFormat;
@property (nonatomic) unsigned long long depthFormat;
@property (nonatomic) long long configVersion;
@property (nonatomic) long long cameraOrientation;
@property double drawableWidth;
@property double drawableHeight;
@property CDStruct_14d5dc5e appPoint;
@property (retain) NSNumber *markerPoint;
@property (retain) NSNumber *verticalMarkerPoint;
@property double pixelWidth;
@property double pixelHeight;
@property double width;
@property double height;
@property double diagonal;
@property (retain, nonatomic) NSString *vendorName;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *pointOfView;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long displayMode;
@property (nonatomic) MISSING_TYPE *reflectedWhitePoint;
@property (nonatomic) MISSING_TYPE *transmittedWhitePoint;
@property (nonatomic) long long markerAnchor;
@property (retain, nonatomic) NSNumber *markerPosition;
@property (nonatomic) long long verticalAlignmentAnchor;
@property (retain, nonatomic) NSNumber *verticalAlignmentPosition;
@property (retain, nonatomic) NSArray *povConfig;
@property (nonatomic, readonly) NSString *deviceName;

+ (_Bool)supportsSecureCoding;
+ (void)setScreenProperties:(double)arg1 drawableWidth:(double)arg2 drawableHeight:(double)arg3;
+ (double)devicePPI;
+ (double)deviceWidth;
+ (double)deviceHeight;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deviceID;
- (id)initInternal;
- (void)doInit;
- (_Bool)isWorn;
- (void)updateFormat:(id)arg1;
- (id)markerAnchorString;
- (id)povString;
- (id)deviceOrientationString;
- (id)displayModeString;
- (id)povStringInternal;
- (id)cameraOrientationString;
- (id)heldStateString;
- (id)colorFormatString;
- (id)depthFormatString;
- (id)descriptionInternal;
- (void)mapMarkerToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5;
- (void)mapToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5 cropX:(double)arg6 cropY:(double)arg7;
- (void)updateResolution;
- (_Bool)isHandheld;
- (_Bool)reflectedWhitePointAvailable;
- (_Bool)transmittedWhitePointAvailvable;
- (id)optimizedConfigurationWithOptions:(long long)arg1;

@end
