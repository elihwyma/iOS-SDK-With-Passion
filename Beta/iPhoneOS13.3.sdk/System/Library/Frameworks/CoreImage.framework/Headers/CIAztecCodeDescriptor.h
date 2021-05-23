/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor

{
    NSData *errorCorrectedPayload;
    _Bool isCompact;
    long long layerCount;
    long long dataCodewordCount;
}

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) _Bool isCompact;
@property (readonly) long long layerCount;
@property (readonly) long long dataCodewordCount;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(_Bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;

@end
