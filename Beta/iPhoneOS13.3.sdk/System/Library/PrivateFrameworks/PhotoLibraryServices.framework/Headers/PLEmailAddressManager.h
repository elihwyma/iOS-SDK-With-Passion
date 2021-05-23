/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PLLazyObject, PLPhotoLibraryPathManager;

@interface PLEmailAddressManager : NSObject

{
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (id)assetsdClient;
- (id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2;
- (id)plistPath;
- (void)_loadDictionariesIfNeeded;
- (id)keyForEmailAddress:(id)arg1;
- (id)emailAddressForKey:(id)arg1;

@end
