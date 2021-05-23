/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUPlaybackInfluencesItemManager, NSString;

@interface HUPlaybackInfluencesViewController : HUItemTableViewController <Swift>

{
    HUPlaybackInfluencesItemManager *_playbackInfluencesItemManager;
}

@property (retain, nonatomic) HUPlaybackInfluencesItemManager *playbackInfluencesItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)dismissPrivacyController;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;

@end
