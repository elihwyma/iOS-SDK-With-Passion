/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRectangleObservation.h>

@class CIBarcodeDescriptor, NSDictionary, NSString;

@interface VNBarcodeObservation : VNRectangleObservation

{
    NSString *_cachedPayloadStringValue;
    NSString *_symbology;
    CIBarcodeDescriptor *_barcodeDescriptor;
    NSDictionary *_acbsBarcodeInfo;
}

@property (copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo;
@property (copy, nonatomic, readonly) NSString *symbology;
@property (nonatomic, readonly) CIBarcodeDescriptor *barcodeDescriptor;
@property (copy, nonatomic, readonly) NSString *payloadStringValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 topLeft:(struct CGPoint)arg4 bottomLeft:(struct CGPoint)arg5 bottomRight:(struct CGPoint)arg6 topRight:(struct CGPoint)arg7;
- (id)initWithRequestRevision:(unsigned long long)arg1 symbology:(id)arg2 descriptor:(id)arg3 boundingBox:(struct CGRect)arg4;

@end
