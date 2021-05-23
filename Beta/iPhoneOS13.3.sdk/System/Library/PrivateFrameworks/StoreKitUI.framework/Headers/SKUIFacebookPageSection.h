/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIFacebookLikeStatus, SKUIFacebookPageComponent, SKUIReviewsFacebookView, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIFacebookPageSection : SKUIStorePageSection

{
    ACAccountStore *_accountStore;
    BOOL _facebookAccountsExist;
    SKUIReviewsFacebookView *_facebookView;
    _Bool _isLoadingLikeStatus;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIFacebookLikeStatus *_likeStatus;
}

@property (nonatomic, readonly) SKUIFacebookPageComponent *pageComponent;

- (void)dealloc;
- (id)_accountStore;
- (void)_resetState;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)_changeStatusToUserLiked:(_Bool)arg1;
- (id)_facebookView;
- (void)_applyColorSchemeToFacebookView:(id)arg1;
- (long long)_facebookAccountsExist;
- (void)_reloadLikeStatus;
- (void)_reloadCollectionViewSection;
- (void)_toggleLikeAction:(id)arg1;
- (void)_finishLookupWithStatus:(id)arg1 error:(id)arg2;

@end
