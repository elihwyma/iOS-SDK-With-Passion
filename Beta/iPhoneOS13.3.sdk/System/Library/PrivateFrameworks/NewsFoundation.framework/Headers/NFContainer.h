/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFCallbackStore, NFContainerPool, NFProxyResolver, NSMutableDictionary, NSString;

@protocol NFResolver;

@interface NFContainer : NSObject

{
    NSMutableDictionary *_definitions;
    NFContainerPool *_pool;
    NFCallbackStore *_callbackStore;
    NSMutableDictionary *_privateContainers;
}

@property (retain, nonatomic) NSMutableDictionary *definitions;
@property (retain, nonatomic) NFContainerPool *pool;
@property (retain, nonatomic) NFCallbackStore *callbackStore;
@property (retain, nonatomic) NSMutableDictionary *privateContainers;
@property (nonatomic, readonly) NFProxyResolver *proxyResolver;
@property (nonatomic, readonly) id <NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithFrameworkAssemblies:(id)arg1 assemblies:(id)arg2;
- (id)initWithBundleAssemblies:(id)arg1;
- (id)initWithBundleAssemblies:(id)arg1 assemblies:(id)arg2;
- (id)initAsPrivateContainer;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)register:(id)arg1 createDefinitionBlock:(CDUnknownBlockType)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)registerKey:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)definitionForKey:(id)arg1;
- (id)registerClass:(Class)arg1 factory:(CDUnknownBlockType)arg2;
- (id)registerProtocol:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(CDUnknownBlockType)arg3;
- (id)initWithAssemblies:(id)arg1;
- (id)initWithFrameworkAssemblies:(id)arg1;
- (void)validateDefinitionsWithProxyResolver:(id)arg1;

@end
