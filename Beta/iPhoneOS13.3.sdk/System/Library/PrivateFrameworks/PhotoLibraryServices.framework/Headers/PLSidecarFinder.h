/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface PLSidecarFinder : NSObject

{
    struct os_unfair_lock_s _lock;
    NSCache *_cachedSidecarURLsByDirectory;
}

@property (retain, nonatomic) NSCache *cachedSidecarURLsByDirectory;

+ (id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2;
+ (_Bool)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2;

- (id)init;
- (void)reset;
- (id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(_Bool)arg4;

@end
