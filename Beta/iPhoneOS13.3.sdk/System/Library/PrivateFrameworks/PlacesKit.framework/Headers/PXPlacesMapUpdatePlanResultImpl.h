/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject

{
    NSMutableSet *_annotationsToAddImmediately;
    NSMutableSet *_annotationsToRemoveImmediately;
    NSMutableSet *_annotationsToRemoveAfterAnimationHasStarted;
    NSMutableSet *_annotationsToRemoveAfterAnimationHasEnded;
    NSMutableSet *_annotationsToRedraw;
    NSMutableSet *_annotationsWithUpdatedIndex;
    NSMutableSet *_overlaysToAddImmediately;
    NSMutableSet *_overlaysToRemoveImmediately;
}

@property (readonly) NSMutableSet *annotationsToAddImmediately;
@property (readonly) NSMutableSet *annotationsToRemoveImmediately;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded;
@property (readonly) NSMutableSet *annotationsToRedraw;
@property (readonly) NSMutableSet *annotationsWithUpdatedIndex;
@property (readonly) NSMutableSet *overlaysToAddImmediately;
@property (readonly) NSMutableSet *overlaysToRemoveImmediately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
