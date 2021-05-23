/*
 Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

#import <Foundation/NSObject.h>

@interface MCMContainerManager : NSObject

+ (id)defaultManager;

- (id)init;
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id *)arg3;
- (id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(_Bool)arg3 existed:(_Bool *)arg4 error:(id *)arg5;
- (id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(_Bool *)arg3 error:(id *)arg4;
- (id)containersWithClass:(long long)arg1 error:(id *)arg2;
- (id)temporaryContainersWithClass:(long long)arg1 error:(id *)arg2;
- (id)deleteContainers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3;
- (_Bool)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id *)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_containersWithClass:(long long)arg1 temporary:(_Bool)arg2 error:(id *)arg3;

@end
