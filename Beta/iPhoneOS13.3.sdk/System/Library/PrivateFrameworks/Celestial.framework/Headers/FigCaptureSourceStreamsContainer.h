/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface FigCaptureSourceStreamsContainer : NSObject

{
    int _deviceType;
    struct OpaqueFigCaptureDevice *_device;
    NSArray *_streams;
    struct OpaqueFigCaptureStream *_primaryStream;
    NSString *_primaryStreamPortType;
    NSDictionary *_streamsByPortType;
    NSDictionary *_baseZoomFactorsByPortType;
    NSData *_poseMatrixData;
}

@property (nonatomic, readonly) int deviceType;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream *primaryStream;
@property (nonatomic, readonly) NSString *primaryStreamPortType;
@property (nonatomic, readonly) NSDictionary *streamsByPortType;
@property (nonatomic, readonly) NSArray *portTypesSupportingDepth;
@property (nonatomic, readonly) float minZoomFactorForDepth;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream *streamProvidingSDOFRenderingParameters;
@property (nonatomic, readonly) NSArray *switchOverZoomFactors;
@property (nonatomic, readonly) NSData *poseMatrixData;

- (void)dealloc;
- (int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2;
- (id)initWithDeviceType:(int)arg1 position:(int)arg2 device:(struct OpaqueFigCaptureDevice *)arg3 baseZoomFactorOverrides:(id)arg4;

@end
