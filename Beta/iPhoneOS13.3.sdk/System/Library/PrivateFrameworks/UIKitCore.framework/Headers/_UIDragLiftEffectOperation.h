/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSSet, UIDragInteraction, UIViewPropertyAnimator;

@protocol UIDragInteractionContext;

__attribute__((visibility("hidden")))
@interface _UIDragLiftEffectOperation : NSObject

{
    UIViewPropertyAnimator *_propertyAnimator;
    id <UIDragInteractionContext> _context;
    NSSet *_items;
    UIDragInteraction *_interaction;
}

@property (retain, nonatomic) id <UIDragInteractionContext> context;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) UIDragInteraction *interaction;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;

@end
