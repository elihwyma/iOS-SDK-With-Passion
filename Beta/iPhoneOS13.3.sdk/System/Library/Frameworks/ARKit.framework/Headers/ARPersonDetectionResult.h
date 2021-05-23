/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@interface ARPersonDetectionResult : NSObject <Swift>

{
    struct CGRect _boundingBox;
}

@property (nonatomic) struct CGRect boundingBox;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect)arg1;
- (struct CGRect)rectScaledToSizeOfPixelBuffer:(struct __CVBuffer *)arg1;

@end
