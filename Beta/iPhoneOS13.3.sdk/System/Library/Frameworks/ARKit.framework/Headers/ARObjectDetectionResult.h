/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject <Swift>

{
    ARReferenceObject *_referenceObject;
    CDStruct_14d5dc5e _visionTransform;
}

@property (nonatomic) CDStruct_14d5dc5e visionTransform;
@property (retain, nonatomic) ARReferenceObject *referenceObject;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
