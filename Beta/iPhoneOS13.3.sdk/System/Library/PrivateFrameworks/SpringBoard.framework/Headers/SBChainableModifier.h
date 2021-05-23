/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBModifierCacheCoordinator, SBModifierMethodCache;

@protocol SBChainableModifierDelegate;

@interface SBChainableModifier : NSObject <Swift>

{
    SBModifierMethodCache *_queryCache;
    SBModifierMethodCache *_contextCache;
    _Bool _hasNotifiedChildrenDidMoveToParent;
    SBChainableModifier *_parentModifier;
    id <SBChainableModifierDelegate> _delegate;
    SBChainableModifier *_previousContextModifier;
    SBChainableModifier *_nextQueryModifier;
    long long _modifierLevel;
    NSString *_key;
}

@property (nonatomic) SBChainableModifier *parentModifier;
@property (nonatomic) SBChainableModifier *previousContextModifier;
@property (retain, nonatomic) SBChainableModifier *nextQueryModifier;
@property (nonatomic) long long modifierLevel;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) SBModifierCacheCoordinator *queryCacheCoordinator;
@property (retain, nonatomic) SBModifierCacheCoordinator *contextCacheCoordinator;
@property (weak, nonatomic) id <SBChainableModifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)queryProtocol;
+ (id)contextProtocol;
+ (void)initalizeIMPCaching;
+ (id)newQueryCache;
+ (id)newContextCache;
+ (id)baseClassForQueryProtocol;
+ (id)querySelectors;
+ (id)newCacheWithSelectorList:(id)arg1 subsequentMethodCacheFunc:(CDUnknownFunctionPointerType)arg2 cachingDictionary:(id)arg3;
+ (id)contextSelectors;
+ (void)verifyIsFloorModifier;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)enumerateChildModifiersWithBlock:(CDUnknownBlockType)arg1;
- (void)performTransactionWithTemporaryChildModifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_nextDynamicQueryModifier;
- (void)_addImplementation:(id)arg1 forClass:(Class)arg2 selector:(SEL)arg3 protocol:(id)arg4;
- (id)_previousDynamicContextModifier;
- (id)_createAndConfigureDynamicModifierWithName:(id)arg1;
- (void)_insertModifier:(id)arg1 afterModifier:(id)arg2 queryAction:(unsigned long long)arg3 contextAction:(unsigned long long)arg4;
- (void)provideNextQueryImplementation:(id)arg1 forSelector:(SEL)arg2;
- (void)providePreviousContextImplementation:(id)arg1 forSelector:(SEL)arg2;
- (void)addChildModifier:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (void)addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3;
- (void)removeChildModifiers:(id)arg1;
- (void)removeChildModifier:(id)arg1;
- (unsigned long long)childModifierCount;
- (id)childModifierByKey:(id)arg1;
- (_Bool)containsChildModifier:(id)arg1;
- (void)_notifyChildrenDidMoveToParentIfNeeded;
- (void)_addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 queryAction:(unsigned long long)arg4 contextAction:(unsigned long long)arg5;
- (_Bool)_anyDescendentImplementsAnyQueryMethod;
- (_Bool)_anyDescendentImplementsAnyContextMethod;
- (id)_lastDeepChildModifier;
- (void)_removeChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3;
- (void)_addChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3;
- (_Bool)respondsToSelectorWithoutForwarding:(SEL)arg1;

@end
