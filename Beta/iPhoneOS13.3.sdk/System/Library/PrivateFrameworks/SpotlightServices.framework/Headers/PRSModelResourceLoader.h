/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface PRSModelResourceLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_pendingUpdates;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *pendingUpdates;

+ (id)sharedInstance;
+ (id)resourceDirectoryPathForType:(unsigned long long)arg1 forUpdate:(_Bool)arg2;

- (id)init;
- (_Bool)hasPendingUpdates;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2;
- (void)markResourcesAsRemovable:(unsigned long long)arg1;
- (int)checkHeader:(struct prs_model_resource_header *)arg1;
- (int)unpackageLZMATarData:(void *)arg1 size:(unsigned long long)arg2 parentDir:(const char *)arg3;
- (void)removeResourcesForType:(unsigned long long)arg1 group:(id)arg2;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4;
- (void)removeDeprecatedResources;
- (_Bool)_loadArchivedResources:(id)arg1 parentPath:(id)arg2;
- (void)markResourcesAsRemovable:(unsigned long long)arg1 group:(id)arg2;
- (void)removeResourcesForType:(unsigned long long)arg1;
- (id)metadataForResourceType:(unsigned long long)arg1;
- (void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3;
- (void)moveNewlyPackagedResources:(id)arg1;

@end
