/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableArray, NSString;

@protocol SXDOMCacheKeyFactory, SXDOMFactory, SXDOMModificationContextFactory;

@interface SXDOMModifierManager : NSObject

{
    id <SXDOMFactory> _DOMFactory;
    id <SXDOMModificationContextFactory> _contextFactory;
    id <SXDOMCacheKeyFactory> _cacheKeyFactory;
    NSMutableArray *_modifiers;
    NSCache *_cache;
}

@property (nonatomic, readonly) id <SXDOMFactory> DOMFactory;
@property (nonatomic, readonly) id <SXDOMModificationContextFactory> contextFactory;
@property (nonatomic, readonly) id <SXDOMCacheKeyFactory> cacheKeyFactory;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (nonatomic, readonly) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addModifier:(id)arg1;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithDOMFactory:(id)arg1 contextFactory:(id)arg2 cacheKeyFactory:(id)arg3;

@end
