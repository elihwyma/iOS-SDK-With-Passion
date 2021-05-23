/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSUserActivity.h>

@class CIBarcodeDescriptor;

@interface NSUserActivity (CIBarcodeDescriptor)

@property (copy, nonatomic, readonly) CIBarcodeDescriptor *detectedBarcodeDescriptor;

- (void)setDetectedCode:(id)arg1;

@end
