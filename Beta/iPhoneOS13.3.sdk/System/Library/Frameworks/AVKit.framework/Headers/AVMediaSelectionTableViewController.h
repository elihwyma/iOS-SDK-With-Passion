/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTableViewController : UITableViewController

{
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
    AVPlayerController *_playerController;
}

@property (retain, nonatomic) AVPlayerController *playerController;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)playerControllerMediaSelectionChanged:(id)arg1;
- (_Bool)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
- (_Bool)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;

@end
