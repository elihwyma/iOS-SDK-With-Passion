/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIBezierPath, UIDynamicItemBehavior;

@protocol OKDynamicItemProxiedObject;

@interface OKDynamicItemProxy : NSObject

{
    _Bool _enabled;
    _Bool _gravityDisabled;
    id <OKDynamicItemProxiedObject> _proxiedObject;
    UIDynamicItemBehavior *_bodyBehavior;
    NSArray *_collisionGroups;
    NSArray *_attachmentBehaviors;
    NSArray *_pushGroups;
    struct CGPoint _center;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
}

@property (readonly) id <OKDynamicItemProxiedObject> proxiedObject;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool gravityDisabled;
@property (readonly) UIDynamicItemBehavior *bodyBehavior;
@property (retain, nonatomic) NSArray *collisionGroups;
@property (retain, nonatomic) NSArray *attachmentBehaviors;
@property (retain, nonatomic) NSArray *pushGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint center;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

- (id)init;
- (void)dealloc;
- (void)resetInitialValues;
- (id)initWithProxiedObject:(id)arg1;
- (void)enforceInitialCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 andTransform:(struct CGAffineTransform)arg3;
- (void)setProxiedObject:(id)arg1;

@end
