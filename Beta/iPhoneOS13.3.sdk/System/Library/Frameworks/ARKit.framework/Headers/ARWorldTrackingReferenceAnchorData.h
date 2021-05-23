/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSSet, NSString;

@interface ARWorldTrackingReferenceAnchorData : NSObject <Swift>

{
    double _timestamp;
    NSSet *_updatedAnchors;
    NSSet *_addedAnchors;
    NSSet *_removedAnchors;
    NSSet *_receivedAnchors;
}

@property (nonatomic) double timestamp;
@property (nonatomic, readonly) NSSet *updatedAnchors;
@property (nonatomic, readonly) NSSet *addedAnchors;
@property (nonatomic, readonly) NSSet *removedAnchors;
@property (retain, nonatomic) NSSet *receivedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)initWithUpdatedAnchors:(id)arg1 addedAnchors:(id)arg2 removedAnchors:(id)arg3;

@end
