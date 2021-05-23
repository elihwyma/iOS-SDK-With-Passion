/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface CFXEffectComposition : NSObject

{
    NSMutableArray *_filters;
    NSMutableArray *_overlays;
    NSMutableArray *_animojis;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *overlays;
@property (retain, nonatomic) NSMutableArray *animojis;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *effects;
@property (nonatomic, readonly) NSArray *jtEffects;
@property (nonatomic, readonly) _Bool hasFaceTrackedOverlays;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) _Bool requiresFaceTracking;

- (id)init;
- (void)addEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)jtEffectsForType:(int)arg1;
- (_Bool)hasEffectOfType:(id)arg1;
- (void)removeAllEffectsOfType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllEffects:(CDUnknownBlockType)arg1;
- (id)CFX_effectsForJettyType:(int)arg1;
- (void)removeEffect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllOverlayEffects:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfEffect:(id)arg1;
- (void)insertEffectAtIndex:(id)arg1 atIndex:(unsigned long long)arg2;

@end
