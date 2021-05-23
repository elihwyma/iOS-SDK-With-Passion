/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPTransformOperation.h>

@class NSArray;

@interface FPModifyFavoritesOperation : FPTransformOperation

{
    NSArray *_ranks;
    _Bool _isUnfavorite;
}

- (id)fp_prettyDescription;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(_Bool)arg3;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2;
- (id)initWithItemsToUnfavorite:(id)arg1;

@end
