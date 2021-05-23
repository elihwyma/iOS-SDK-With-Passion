/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXNonuniformTransform, PXRegionOfInterest, UIView;

@protocol PXZoomAnimationContext;

@interface _PXTransformedViewContentZoomAnimationContext : NSObject

{
    double _fromAlpha;
    PXNonuniformTransform *_fromTransform;
    double _toAlpha;
    PXNonuniformTransform *_toTransform;
    UIView *_transformedView;
    id <PXZoomAnimationContext> _context;
}

@property (nonatomic, readonly) UIView *transformedView;
@property (nonatomic, readonly) id <PXZoomAnimationContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) double fromAlpha;
@property (nonatomic, readonly) PXNonuniformTransform *fromTransform;
@property (nonatomic, readonly) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, readonly) double toAlpha;
@property (nonatomic, readonly) PXNonuniformTransform *toTransform;
@property (nonatomic, readonly) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, readonly, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

- (long long)willBeginAnimation;
- (void)didEndAnimation:(long long)arg1;
- (void)registerCleanupHandler:(CDUnknownBlockType)arg1;
- (id)initWithTransformedView:(id)arg1 context:(id)arg2;

@end
