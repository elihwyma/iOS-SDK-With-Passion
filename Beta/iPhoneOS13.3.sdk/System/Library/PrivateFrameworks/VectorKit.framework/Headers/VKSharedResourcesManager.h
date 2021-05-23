/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKSharedResourcesManager : NSObject

{
    struct mutex _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (id)sharedManager;
+ (id)sharedResources;
+ (void)addResourceUser;
+ (void)removeResourceUser;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)resources;
- (_Bool)hasResoruces;

@end
