/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewController.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MultiValuePrefsController : UITableViewController

{
    NSDictionary *_menuDict;
}

@property (retain, nonatomic) NSDictionary *menuDict;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setMultiValue:(id)arg1;

@end
