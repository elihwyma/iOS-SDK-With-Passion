/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

__attribute__((visibility("hidden")))
@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry

{
    double _zoomAmount;
}

@property (nonatomic) double zoomAmount;

- (id)description;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (void)convertToIdentity;

@end
