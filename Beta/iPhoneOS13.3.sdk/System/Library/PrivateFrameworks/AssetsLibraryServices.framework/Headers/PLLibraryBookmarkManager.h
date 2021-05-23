/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject

{
    NSMutableDictionary *_securityScopedBookmarksByPathKey;
    NSMutableDictionary *_activeURLsByPathKey;
}

+ (id)sharedBookmarkManager;
+ (id)resolveSecurityScopedBookmark:(id)arg1 isStale:(_Bool *)arg2 error:(id *)arg3;
+ (id)resolveRegularBookmark:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (id)URLFromClientLibraryURL:(id)arg1 bookmark:(id)arg2 error:(id *)arg3;
- (id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2;
- (void)removeSSBForLibraryURL:(id)arg1;
- (void)removeInvalidSSBsExcept:(id)arg1;
- (id)allKnownLibraryURLs;
- (void)_importLithiumAccessRights;
- (void)_storeBookmarkForURL:(id)arg1;
- (void)_loadFromDefaults;
- (void)_saveToDefaults;
- (void)_refreshSecurityScopedBookmarks;
- (id)_activeURLForClientLibraryURL:(id)arg1;
- (id)_newSecurityScopedBookmarkDataForURL:(id)arg1;
- (id)_newSandboxExtensionDataForClient:(CDStruct_6ad76789)arg1 path:(id)arg2 writable:(_Bool)arg3;
- (id)_resolveSecurityScopedBookmarkData:(id)arg1 error:(id *)arg2;
- (void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2;
- (void)_removeActiveURLForPathKey:(id)arg1;
- (void)_removeSSBForPathKey:(id)arg1;

@end
