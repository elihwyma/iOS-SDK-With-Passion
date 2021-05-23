/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFeature.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature

{
    struct CGRect bounds;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    CIQRCodeDescriptor *symbolDescriptor;
}

@property (readonly) struct CGRect bounds;
@property (readonly) struct CGPoint topLeft;
@property (readonly) struct CGPoint topRight;
@property (readonly) struct CGPoint bottomLeft;
@property (readonly) struct CGPoint bottomRight;
@property (readonly) NSString *messageString;
@property (readonly) CIQRCodeDescriptor *symbolDescriptor;

+ (_Bool)supportsSecureCoding;
+ (id)featureWithInternalRepresentation:(CDStruct_1b0b1413 *)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(CDStruct_1b0b1413 *)arg1;

@end
