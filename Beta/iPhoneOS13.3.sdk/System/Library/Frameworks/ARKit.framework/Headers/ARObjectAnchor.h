/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARAnchor.h>

@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor

{
    ARReferenceObject *_referenceObject;
}

@property (nonatomic, readonly) ARReferenceObject *referenceObject;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (_Bool)isTracked;
- (id)initWithReferenceObject:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;

@end
