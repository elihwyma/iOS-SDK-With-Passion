/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface ARFaceTrackingResults : NSObject <Swift>

{
    NSArray *_trackedFaces;
}

@property (copy, nonatomic) NSArray *trackedFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

@end
