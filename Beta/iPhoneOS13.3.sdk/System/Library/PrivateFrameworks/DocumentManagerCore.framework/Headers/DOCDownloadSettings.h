/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class FPItem, NSArray, NSError;

@interface DOCDownloadSettings : NSObject

{
    NSArray *_providers;
    NSError *_providersObserverError;
    id _providersObserverContext;
    FPItem *_currentDefaultDownloadsLocationItem;
}

@property (retain) NSArray *providers;
@property (retain) NSError *providersObserverError;
@property (retain) id providersObserverContext;
@property (retain) FPItem *currentDefaultDownloadsLocationItem;

- (id)init;
- (void)fetchProvidersSuitableForDownloads:(CDUnknownBlockType)arg1;
- (void)fetchDefaultDownloadsLocationItem:(CDUnknownBlockType)arg1;
- (void)setDefaultDownloadsItemForProviderDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultDownloadsLocationItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchDefaultFallbackDownloadLocationWithPreferredDomain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeCurrentDownloadsLocationFromFavorites;
- (_Bool)_saveDownloadFolderItem:(id)arg1 error:(id *)arg2;
- (id)_createErrorForCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
- (void)_createDefaultDownloadsFolderInParent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_rootItemOfPreferredProviderInDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchProviders:(CDUnknownBlockType)arg1;
- (void)_fetchAvailableProviders:(CDUnknownBlockType)arg1;
- (void)_preferredProvidersIn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validatePreferredProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetDefaultDownloadsLocationItem;

@end
