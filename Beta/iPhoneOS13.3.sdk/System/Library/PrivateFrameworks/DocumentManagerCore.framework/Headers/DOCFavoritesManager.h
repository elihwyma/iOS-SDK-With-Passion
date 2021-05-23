/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <DocumentManagerCore/DOCItemCollectionObserver.h>

@class NSArray;

@interface DOCFavoritesManager : DOCItemCollectionObserver

@property (readonly) NSArray *favoritedLocations;

+ (id)sharedManager;

- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)redistributeRanksCompletion:(CDUnknownBlockType)arg1;
- (void)insertFavorites:(id)arg1 atIndex:(long long)arg2;
- (void)runInMainThread:(CDUnknownBlockType)arg1;

@end
