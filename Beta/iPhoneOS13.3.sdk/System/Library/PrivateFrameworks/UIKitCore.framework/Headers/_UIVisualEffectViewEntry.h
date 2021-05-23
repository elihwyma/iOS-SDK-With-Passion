/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewEntry : NSObject

{
    long long _requirements;
}

@property (nonatomic) long long requirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (void)convertToIdentity;
- (void)addEffectToView:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (void)applyEffectAsRequested:(_Bool)arg1 toView:(id)arg2;
- (id)copyForTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;

@end
