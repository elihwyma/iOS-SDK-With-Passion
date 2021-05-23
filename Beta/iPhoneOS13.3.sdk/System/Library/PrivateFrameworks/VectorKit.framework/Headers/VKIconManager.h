/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKInternalIconManager, VKSharedResources;

@protocol OS_dispatch_source;

@interface VKIconManager : NSObject

{
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    _Bool _usingSingletonIconManager;
    struct mutex _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)purge;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (_Bool)isCachingAtlases;
- (unsigned int)darkVariant;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (void)setIsCachingAtlases:(_Bool)arg1;
- (id)_internalIconManager;

@end
