//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUDetailsPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUHomePodDetailViewDelegate-Protocol.h>
#import <HomeUI/HUHomePodStereoSwapperCellDelegate-Protocol.h>

@class HFMediaSystemBuilder, NAFuture;
@protocol HUPresentationDelegate;

@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController <HUHomePodStereoSwapperCellDelegate, HUHomePodDetailViewDelegate, HUDetailsPresentationDelegateHost>
{
    BOOL _requiresPresentingViewControllerDismissal;
    id <HUPresentationDelegate> _presentationDelegate;
    HFMediaSystemBuilder *_mediaSystemBuilder;
    NAFuture *_accessoryIdentifyFuture;
}

@property(retain, nonatomic) NAFuture *accessoryIdentifyFuture; // @synthesize accessoryIdentifyFuture=_accessoryIdentifyFuture;
@property(readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // @synthesize mediaSystemBuilder=_mediaSystemBuilder;
@property(nonatomic) BOOL requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
// - (void).cxx_destruct;
- (id)_homePodStereoSwapperCell;
- (void)_updateSwapperCell:(id)arg1;
- (void)didPressSwapButton:(id)arg1;
- (void)didTapSpeaker:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)item;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)initWithMediaSystemBuilder:(id)arg1 mediaAccessoryItem:(id)arg2;

@end

