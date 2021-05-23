/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDCachePurger : NSObject

{
    _Bool _purged;
    NSArray *_oldCacheDirs;
}

@property (nonatomic) _Bool purged;
@property (nonatomic, readonly) NSArray *oldCacheDirs;

+ (id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4;

- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4;
- (void)purgeOldCacheDirectories;

@end
