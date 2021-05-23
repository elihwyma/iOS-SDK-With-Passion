/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIView;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIViewAnimationInfo : NSObject

{
    UIView *_owningView;
    CDUnknownBlockType _invalidationBlock;
    NSMutableDictionary *_animatableProperties;
    NSMutableDictionary *_presentationModifiers;
    NSMutableDictionary *_modifierGroupRequestHandlers;
    NSMutableDictionary *_isPartOfHigherOrderProperty;
    NSObject<OS_dispatch_queue> *_lockingQueue;
}

@property (weak) UIView *owningView;
@property (copy, nonatomic) CDUnknownBlockType invalidationBlock;
@property (retain, nonatomic) NSMutableDictionary *animatableProperties;
@property (retain, nonatomic) NSMutableDictionary *presentationModifiers;
@property (retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers;
@property (retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue;

- (id)initWithView:(id)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (id)animatablePropertyForKey:(id)arg1 createIfNecessary:(_Bool)arg2;
- (_Bool)_canInvalidate;
- (void)setAnimatableProperty:(id)arg1 forKey:(id)arg2;
- (void)_invalidateIfPossible;
- (id)animatablePropertyKeys;
- (id)presentationModifierForKey:(id)arg1;
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;
- (id)modifierGroupRequestHandlerForKey:(id)arg1;
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;

@end
