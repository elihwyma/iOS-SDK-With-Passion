/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior : UIDynamicBehavior

{
    _Bool _useDefaultViewPropertiesApplier;
    struct {
        unsigned int elasticityChanged:1;
        unsigned int frictionChanged:1;
        unsigned int densityChanged:1;
        unsigned int resistanceChanged:1;
        unsigned int angularResistanceChanged:1;
        unsigned int rotationEnabledChanged:1;
        unsigned int useDefaultViewPropertiesApplierChanged:1;
        unsigned int chargeChanged:1;
        unsigned int dynamicChanged:1;
    } _stateFlags;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
    _Bool _anchored;
    _Bool _allowsRotation;
    double _elasticity;
    double _friction;
    double _density;
    double _resistance;
    double _angularResistance;
    double _charge;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (nonatomic) double elasticity;
@property (nonatomic) double friction;
@property (nonatomic) double density;
@property (nonatomic) double resistance;
@property (nonatomic) double angularResistance;
@property (nonatomic) double charge;
@property (nonatomic, getter=isAnchored) _Bool anchored;
@property (nonatomic) _Bool allowsRotation;

+ (_Bool)_isPrimitiveBehavior;

- (id)init;
- (id)description;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
- (void)addLinearVelocity:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct CGPoint)linearVelocityForItem:(id)arg1;
- (void)_setPosition:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct CGPoint)_positionForItem:(id)arg1;
- (void)_setAngle:(double)arg1 forItem:(id)arg2;
- (double)_angleForItem:(id)arg1;
- (void)addAngularVelocity:(double)arg1 forItem:(id)arg2;
- (double)angularVelocityForItem:(id)arg1;
- (double)_elasticityForItem:(id)arg1;
- (double)_frictionForItem:(id)arg1;
- (double)_densityForItem:(id)arg1;
- (double)_resistanceForItem:(id)arg1;
- (double)_angularResistanceForItem:(id)arg1;
- (double)_massForItem:(id)arg1;
- (_Bool)_rotationEnabledForItem:(id)arg1;
- (void)applyImpulse:(struct CGPoint)arg1 toItem:(id)arg2;
- (_Bool)useDefaultViewPropertiesApplier;
- (void)setUseDefaultViewPropertiesApplier:(_Bool)arg1;

@end
