/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPContainer.h>

@interface MSPFavoritesContainer : MSPContainer

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (id)placesQueryWithDelegate:(id)arg1;
- (id)queryWithDelegate:(id)arg1;
- (void)moveFavoriteWithIdentifier:(id)arg1 belowFavoriteWithIdentifier:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)moveFavorite:(id)arg1 belowFavorite:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)transiteLinesQueryWithDelegate:(id)arg1;
- (void)deDuplicateFavoritesWithCompletion:(CDUnknownBlockType)arg1;

@end
