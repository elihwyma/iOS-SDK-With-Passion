/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject

{
    NSMutableSet *_inFlightAnimations;
}

@property (nonatomic, readonly) NSMutableSet *inFlightAnimations;

+ (id)sharedTracker;
+ (void)scrollAnimationDidBeginWithScrollContext:(CDStruct_0c606d9b)arg1;
+ (void)scrollAnimationDidEndWithScrollContext:(CDStruct_0c606d9b)arg1;
+ (void)_scrollAnimationOccurredWithContext:(CDStruct_0c606d9b)arg1 isBegin:(_Bool)arg2;

- (id)init;
- (void)zoomLevelTransitionPreparationDidBegin:(id)arg1;
- (void)zoomLevelTransitionDidBegin:(id)arg1;
- (void)zoomLevelTransitionDidEnd:(id)arg1;
- (void)_zoomLevelTransitionOccurred:(id)arg1 isPreparation:(_Bool)arg2 isBegin:(_Bool)arg3;
- (void)zoomLevelTransitionsDidEndEarly;

@end
