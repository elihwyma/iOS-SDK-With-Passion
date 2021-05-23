/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARRaycastQuery, ARWorldTrackingTechnique, NSUUID;

@interface ARTrackedRaycast : NSObject

{
    NSUUID *_identifier;
    CDUnknownBlockType _updateHandler;
    ARWorldTrackingTechnique *_attachedWorldTrackingTechnique;
    ARRaycastQuery *_trackedQuery;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (weak, nonatomic) ARWorldTrackingTechnique *attachedWorldTrackingTechnique;
@property (retain) ARRaycastQuery *trackedQuery;

- (id)description;
- (id)query;
- (void)stopTracking;
- (id)initWithIdentifier:(id)arg1 ray:(id)arg2 worldTrackingTechnique:(id)arg3 updateHandler:(CDUnknownBlockType)arg4;

@end
