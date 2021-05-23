/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@protocol MemoryOwner;

@interface MiroPlayerViewController : UIViewController

{
    id <MemoryOwner> _memoryOwnerDelegate;
}

@property (retain, nonatomic) id <MemoryOwner> memoryOwnerDelegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)warnTooManyLiveCompositors:(id)arg1;

@end
