/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@interface SUViewControllerFactory : NSObject

- (id)newPlaceholderViewController;
- (id)newStorePageViewControllerWithSection:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2;
- (id)newNetworkLockoutViewControllerWithSection:(id)arg1;
- (id)newComposeReviewViewControllerWithCompositionURL:(id)arg1;
- (id)newDownloadsViewController;
- (id)newViewControllerForTrackList:(id)arg1;
- (id)newVolumeViewController;

@end
