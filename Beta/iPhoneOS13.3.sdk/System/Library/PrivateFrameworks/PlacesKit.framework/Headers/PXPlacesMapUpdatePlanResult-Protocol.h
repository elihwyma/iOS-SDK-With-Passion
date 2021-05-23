/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <PlacesKit/Swift-Protocol.h>

@class NSSet;

@protocol PXPlacesMapUpdatePlanResult <Swift>

@property (readonly) NSSet *annotationsToAddImmediately;
@property (readonly) NSSet *annotationsToRemoveImmediately;
@property (readonly) NSSet *annotationsToRemoveAfterAnimationHasStarted;
@property (readonly) NSSet *annotationsToRemoveAfterAnimationHasEnded;
@property (readonly) NSSet *annotationsToRedraw;
@property (readonly) NSSet *annotationsWithUpdatedIndex;
@property (readonly) NSSet *overlaysToAddImmediately;
@property (readonly) NSSet *overlaysToRemoveImmediately;

@end
