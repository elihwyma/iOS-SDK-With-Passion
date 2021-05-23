/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFrameStatisticsByPortType, BWStillImageCaptureMetadata, NSArray, NSString;

@interface BWStillImageCaptureSettings : NSObject

{
    long long _settingsID;
    int _captureType;
    unsigned long long _captureFlags;
    unsigned long long _sceneFlags;
    _Bool _deliverProcessedImage;
    _Bool _deliverOriginalImage;
    _Bool _deliverSushiRaw;
    _Bool _deliverDeferredPhotoProxyImage;
    int _overCaptureMode;
    BWFrameStatisticsByPortType *_frameStatisticsByPortType;
    BWStillImageCaptureMetadata *_metadata;
    float _primaryImageMeteorHeadroom;
    NSString *_masterPortType;
    NSArray *_captureStreamSettings;
    int _tempExpectedClientImageCount;
    int _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
    NSString *_applicationID;
    long long _stillImageRequestTime;
}

@property (nonatomic, readonly) long long settingsID;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic, readonly) _Bool deliverProcessedImage;
@property (nonatomic, readonly) _Bool deliverOriginalImage;
@property (nonatomic, readonly) _Bool deliverSushiRaw;
@property (nonatomic) _Bool deliverDeferredPhotoProxyImage;
@property (nonatomic) int overCaptureMode;
@property (retain, nonatomic) NSString *masterPortType;
@property (nonatomic, readonly) NSArray *portTypes;
@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic, readonly) _Bool expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (copy, nonatomic) NSString *applicationID;
@property (nonatomic) long long stillImageRequestTime;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (id)frameStatisticsByPortType;
- (float)primaryImageMeteorHeadroom;
- (id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 frameStatisticsByPortType:(id)arg5 deliverProcessedImage:(_Bool)arg6 deliverOriginalImage:(_Bool)arg7 deliverSushiRaw:(_Bool)arg8 captureStreamSettings:(id)arg9;
- (void)setPrimaryImageMeteorHeadroom:(float)arg1;

@end
