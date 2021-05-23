/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSTimer, PXGadgetNavigationItem;

@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject

{
    id <PXGadgetNavigationHelperDelegate> _delegate;
    PXGadgetNavigationItem *_pendingNavigationItem;
    NSTimer *_navigationInvalidationTimer;
}

@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer;
@property (weak, nonatomic) id <PXGadgetNavigationHelperDelegate> delegate;
@property (nonatomic, readonly) _Bool hasPendingNavigation;

- (_Bool)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (_Bool)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (_Bool)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(_Bool)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (void)navigateIfNeeded;
- (void)startPendingNavigationTimer;
- (void)invalidateAnyPendingNavigation;
- (_Bool)_navigateToGadget:(id)arg1 animated:(_Bool)arg2 navigationBlock:(CDUnknownBlockType)arg3;
- (void)_stopPendingNavigationTimer;
- (void)_pendingNavigationInvalidationTimerFired:(id)arg1;
- (void)navigateToSharedAlbumInvitesAnimated:(_Bool)arg1;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(_Bool)arg1;
- (void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToSuggestionGadget:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)arg1;
- (void)navigateToGadgetForCMMSuggestions;

@end
