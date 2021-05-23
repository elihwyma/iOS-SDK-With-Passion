/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SearchUIMapsViewController;

@interface SearchUIMapPlaceCardSectionView

{
    _Bool _alreadyDispatchedOnMainQueue;
    SearchUIMapsViewController *_mapViewController;
    struct CGSize _placecardBoundsSize;
}

@property (retain) SearchUIMapsViewController *mapViewController;
@property _Bool alreadyDispatchedOnMainQueue;
@property (nonatomic) struct CGSize placecardBoundsSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)placeViewControllerDidUpdateHeight:(id)arg1;
- (void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (id)embeddedViewController;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;

@end
