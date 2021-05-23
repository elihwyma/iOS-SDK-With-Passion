/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSHashTable, NSOrderedSet, NSString;

@interface FBSceneLayerManager : NSObject <Swift>

{
    NSString *_identifier;
    NSOrderedSet *_layers;
    NSHashTable *_observers;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)_setLayers:(id)arg1;
- (void)_observer_willStartTrackingLayers;
- (void)_observer_didStartTrackingLayers;
- (void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_observer_didStopTrackingLayers;
- (id)layerWithContextID:(unsigned int)arg1;

@end
