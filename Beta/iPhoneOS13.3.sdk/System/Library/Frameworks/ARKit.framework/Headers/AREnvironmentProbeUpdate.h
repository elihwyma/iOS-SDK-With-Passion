/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class AREnvironmentProbeManager, NSArray, NSString;

@interface AREnvironmentProbeUpdate : NSObject <Swift>

{
    NSArray *_addedProbeAnchors;
    NSArray *_updatedProbeAnchors;
    NSArray *_removedProbeAnchors;
    AREnvironmentProbeManager *_manager;
}

@property (weak, nonatomic) AREnvironmentProbeManager *manager;
@property (retain, nonatomic) NSArray *addedProbeAnchors;
@property (retain, nonatomic) NSArray *updatedProbeAnchors;
@property (retain, nonatomic) NSArray *removedProbeAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end
