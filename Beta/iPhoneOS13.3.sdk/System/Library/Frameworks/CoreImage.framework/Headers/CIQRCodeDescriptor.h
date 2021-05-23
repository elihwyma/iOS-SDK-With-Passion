/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor

{
    NSData *errorCorrectedPayload;
    long long symbolVersion;
    unsigned char maskPattern;
    long long errorCorrectionLevel;
}

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long symbolVersion;
@property (readonly) unsigned char maskPattern;
@property (readonly) long long errorCorrectionLevel;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;

@end
