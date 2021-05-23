/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UITableViewController.h>

@class MCDPlayableContentPlaybackManager;

@interface MCDPlayableContentQueueTableViewController : UITableViewController

{
    MCDPlayableContentPlaybackManager *_contentManager;
}

@property (retain, nonatomic) MCDPlayableContentPlaybackManager *contentManager;

- (void)viewDidLoad;
- (id)initWithContentManager:(id)arg1;

@end
