/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor

{
    NSData *errorCorrectedPayload;
    _Bool isCompact;
    long long rowCount;
    long long columnCount;
}

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) _Bool isCompact;
@property (readonly) long long rowCount;
@property (readonly) long long columnCount;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 isCompact:(_Bool)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(_Bool)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;

@end
