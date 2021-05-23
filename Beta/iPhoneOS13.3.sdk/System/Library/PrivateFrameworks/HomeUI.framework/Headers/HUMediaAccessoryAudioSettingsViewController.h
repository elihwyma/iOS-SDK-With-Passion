/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFMediaSystemBuilder, HUMediaAccessoryAudioSettingsItemManager, NAFuture, NSString;

@protocol HUPresentationDelegate;

@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController

{
    _Bool _requiresPresentingViewControllerDismissal;
    id <HUPresentationDelegate> _presentationDelegate;
    HFMediaSystemBuilder *_mediaSystemBuilder;
    NAFuture *_accessoryIdentifyFuture;
}

@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic, readonly) HUMediaAccessoryAudioSettingsItemManager *itemManager;
@property (retain, nonatomic) NAFuture *accessoryIdentifyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool requiresPresentingViewControllerDismissal;

- (id)item;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (void)_updateSwapperCell:(id)arg1;
- (id)_homePodStereoSwapperCell;
- (void)didPressSwapButton:(id)arg1;
- (void)didTapSpeaker:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1 mediaAccessoryItem:(id)arg2;

@end
