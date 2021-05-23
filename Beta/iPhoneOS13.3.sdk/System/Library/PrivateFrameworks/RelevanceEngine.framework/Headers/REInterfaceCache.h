/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface REInterfaceCache : RESingleton

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_supportedInterfaces;
}

- (id)_init;
- (id)_supportedProtocols;
- (void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)exportedInterfaceClass:(Class)arg1;
- (id)_queue_valueForKey:(id)arg1 level:(unsigned long long)arg2;
- (_Bool)_supportsCache;
- (id)_accessInterfaceForKey:(id)arg1;
- (_Bool)_interface:(id)arg1 implementsInterface:(id)arg2;
- (void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)exportedInterfaceProtocol:(id)arg1;
- (void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
