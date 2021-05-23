/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class CIBarcodeDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface BCSQRCodePayload : NSObject

{
    CIBarcodeDescriptor *_barcodeDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long codeType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBarcodeDescriptor:(id)arg1;
- (void)savePayloadInUserActivity:(id)arg1;

@end
