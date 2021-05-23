/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (copy, nonatomic) NSString *locateMode;
@property (copy, nonatomic) NSArray *symbologies;

+ (void)initialize;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)barcodeSymbologyForACBSBarcodeType:(id)arg1;
+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1;
+ (id)_allBarcodeSymbologies;
+ (id)supportedSymbologies;
+ (id)availableLocateModes;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1;
- (int)_ACBarcodeRecognizerLocateMode;
- (struct ACBSConfig *)_createACBSConfigAndReturnError:(id *)arg1;
- (_Bool)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(struct CGPoint *)arg2 topLeft:(struct CGPoint *)arg3 topRight:(struct CGPoint *)arg4 bottomRight:(struct CGPoint *)arg5;
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(struct CGRect)arg4 requestRevision:(unsigned long long)arg5 error:(id *)arg6;
- (id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(struct ACBSConfig *)arg2 requestRevision:(unsigned long long)arg3 error:(id *)arg4;

@end
