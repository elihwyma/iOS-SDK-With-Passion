/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary, NSObject, NSString;

@protocol NSCopying, PMPlayerControlling;

@interface PMDebugPickerViewController : UITableViewController

{
    id <PMPlayerControlling> _playerController;
    NSObject<NSCopying> *_originalEntryID;
    NSString *_moodID;
    CDUnknownBlockType _replaceMoodPartForEntryIDBlock;
    NSDictionary *_entryIDsByMood;
    NSDictionary *_displayNamesByEntryID;
    long long _selectedSection;
    long long _selectedRow;
    NSArray *_sortedMoodIDs;
}

@property (nonatomic) long long selectedSection;
@property (nonatomic) long long selectedRow;
@property (retain, nonatomic) NSArray *sortedMoodIDs;
@property (weak, nonatomic) id <PMPlayerControlling> playerController;
@property (copy, nonatomic) NSObject<NSCopying> *originalEntryID;
@property (copy, nonatomic) NSString *moodID;
@property (copy, nonatomic) CDUnknownBlockType replaceMoodPartForEntryIDBlock;
@property (retain, nonatomic) NSDictionary *entryIDsByMood;
@property (retain, nonatomic) NSDictionary *displayNamesByEntryID;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_setSelected:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)_addObserverForTextSizeDidChange;
- (void)_removeObserverForTextSizeDidChange;
- (void)userTextSizeDidChange;
- (id)_indexPathForEntryID:(id)arg1;
- (id)_moodIDForSection:(long long)arg1;
- (id)_entryIDForIndexPath:(id)arg1;

@end
