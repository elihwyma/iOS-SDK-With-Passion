/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface _UIFocusMovementInfo : NSObject <Swift>

{
    _Bool _shouldLoadScrollableContainer;
    _Bool _isInitialMovement;
    _Bool _isVelocityBased;
    _UIFocusMovementInfo *_primaryMovementInfo;
    _UIFocusMovementInfo *_secondaryMovementInfo;
    unsigned long long _heading;
    unsigned long long _secondaryHeading;
    unsigned long long _linearHeading;
    struct CGVector _velocity;
}

@property (nonatomic, setter=_setHeading:) unsigned long long heading;
@property (nonatomic, getter=_secondaryHeading, setter=_setSecondaryHeading:) unsigned long long secondaryHeading;
@property (nonatomic, getter=_linearHeading, setter=_setLinearHeading:) unsigned long long linearHeading;
@property (nonatomic, getter=_shouldLoadScrollableContainer, setter=_setShouldLoadScrollableContainer:) _Bool shouldLoadScrollableContainer;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) struct CGVector velocity;
@property (nonatomic, getter=_isInitialMovement, setter=_setIsInitialMovement:) _Bool isInitialMovement;
@property (nonatomic, getter=_isVelocityBased, setter=_setIsVelocityBased:) _Bool isVelocityBased;
@property (nonatomic, readonly) _UIFocusMovementInfo *primaryMovementInfo;
@property (nonatomic, readonly) _UIFocusMovementInfo *secondaryMovementInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_movementWithHeading:(unsigned long long)arg1 isInitial:(_Bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 shouldLoadScrollableContainer:(_Bool)arg3 isInitial:(_Bool)arg4;
+ (id)_movementWithVelocity:(struct CGVector)arg1 isInitial:(_Bool)arg2;
+ (id)_movementWithHeading:(unsigned long long)arg1 velocity:(struct CGVector)arg2 isInitial:(_Bool)arg3;
+ (id)_movementWithHeading:(unsigned long long)arg1 secondaryHeading:(unsigned long long)arg2 velocity:(struct CGVector)arg3 isInitial:(_Bool)arg4;
+ (id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 isInitial:(_Bool)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)_isLinearMovement;

@end
