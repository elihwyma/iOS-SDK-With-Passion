/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <CoreImage/CIImage.h>

@interface CIImage (BCSCIImageExtras)

- (id)_bcs_stringValueIfQRCode;

@end
