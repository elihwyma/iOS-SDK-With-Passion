/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AFPluginManager : NSObject

{
    NSString *_path;
    NSArray *_domainKeys;
    CDUnknownBlockType _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
    _Bool _hasLoadedBundles;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;

- (id)description;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;
- (void)_loadBundlesIfNeeded;
- (void)_registerBundle:(id)arg1;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)preloadBundles;

@end
