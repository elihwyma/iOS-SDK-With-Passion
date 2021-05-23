/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PXNonuniformTransform, PXRegionOfInterest;

@protocol OS_dispatch_group;

@interface _PXZoomAnimationContext : NSObject

{
    NSObject<OS_dispatch_group> *_animationGroup;
    NSMutableArray *_cleanupHandlers;
    _Bool _matchingRegionsOfInterest;
    _Bool _keepsSourceRegionOfInterestContent;
    long long _animationType;
    double _animationDuration;
    double _fromAlpha;
    PXNonuniformTransform *_fromTransform;
    PXRegionOfInterest *_fromRegionOfInterest;
    double _toAlpha;
    PXNonuniformTransform *_toTransform;
    PXRegionOfInterest *_toRegionOfInterest;
    CDUnknownBlockType __allAnimationsCompletionHandler;
}

@property (copy, nonatomic, setter=_setAllAnimationsCompletionHandler:) CDUnknownBlockType _allAnimationsCompletionHandler;
@property (nonatomic) long long animationType;
@property (nonatomic) double animationDuration;
@property (nonatomic) double fromAlpha;
@property (retain, nonatomic) PXNonuniformTransform *fromTransform;
@property (retain, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic) double toAlpha;
@property (retain, nonatomic) PXNonuniformTransform *toTransform;
@property (retain, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest;
@property (nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cleanup;
- (long long)willBeginAnimation;
- (void)didEndAnimation:(long long)arg1;
- (void)registerCleanupHandler:(CDUnknownBlockType)arg1;
- (void)notifyWhenAllAnimationsCompleted:(CDUnknownBlockType)arg1;

@end
