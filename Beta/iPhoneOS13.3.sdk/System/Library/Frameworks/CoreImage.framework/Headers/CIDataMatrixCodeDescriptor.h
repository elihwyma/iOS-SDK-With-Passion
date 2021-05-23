/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor

{
    NSData *errorCorrectedPayload;
    long long rowCount;
    long long columnCount;
    long long eccVersion;
}

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long rowCount;
@property (readonly) long long columnCount;
@property (readonly) long long eccVersion;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4;

@end
