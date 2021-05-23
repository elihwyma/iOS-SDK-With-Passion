/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBChainableModifier, SBModifierCacheCoordinator;

@interface SBModifierMethodCache : NSObject <Swift>

{
    SBChainableModifier *_modifier;
    SEL *_selectors;
    long long _selectorCount;
    CDUnknownFunctionPointerType *_imps;
    unsigned long long _genCount;
    SBModifierCacheCoordinator *_cacheCoordinator;
    struct SBModifierCacheDispatchData *_dispatchCache;
    CDUnknownFunctionPointerType _nextFunc;
}

@property (nonatomic) SBChainableModifier *modifier;
@property (retain, nonatomic) SBModifierCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) _Bool hasNonTrampolineIMPs;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIMPs:(CDUnknownFunctionPointerType *)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(CDUnknownFunctionPointerType)arg3;
- (id)unimplementedMethods;

@end
