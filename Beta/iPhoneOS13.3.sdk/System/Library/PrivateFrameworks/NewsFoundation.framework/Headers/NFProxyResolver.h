/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFCallbackStore, NFContainerPool, NFContext, NSString;

@protocol NFDefinitionContainer;

@interface NFProxyResolver : NSObject

{
    id <NFDefinitionContainer> _publicContainer;
    id <NFDefinitionContainer> _privateContainer;
    NFContainerPool *_pool;
    NFCallbackStore *_callbackStore;
    NFContext *_context;
}

@property (retain, nonatomic) id <NFDefinitionContainer> publicContainer;
@property (retain, nonatomic) id <NFDefinitionContainer> privateContainer;
@property (retain, nonatomic) NFContainerPool *pool;
@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (retain, nonatomic) NFContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 inPool:(id)arg3 callbackStore:(id)arg4;
- (id)createProxyResolverForPrivateContainer:(id)arg1;
- (id)resolveProtocol:(id)arg1;
- (id)resolveClass:(Class)arg1 name:(id)arg2;
- (id)contextWithContextBlock:(CDUnknownBlockType)arg1;
- (id)resolveForKey:(id)arg1 context:(id)arg2 validateBlock:(CDUnknownBlockType)arg3;
- (id)resolveProtocol:(id)arg1 name:(id)arg2;
- (void)ensure:(id)arg1;
- (id)resolveForKey:(id)arg1;
- (id)currentObjectGraphResolver:(unsigned long long)arg1;
- (void)linkResolverWithLinkBlock:(CDUnknownBlockType)arg1;
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 contextBlock:(CDUnknownBlockType)arg2;
- (id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;
- (id)resolveProtocol:(id)arg1 contextBlock:(CDUnknownBlockType)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;
- (id)resolveForKey:(id)arg1 context:(id)arg2;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2 context:(id)arg3;
- (void)ensureClass:(Class)arg1;
- (void)ensureClass:(Class)arg1 name:(id)arg2;
- (void)ensureProtocol:(id)arg1;
- (void)ensureProtocol:(id)arg1 name:(id)arg2;

@end
