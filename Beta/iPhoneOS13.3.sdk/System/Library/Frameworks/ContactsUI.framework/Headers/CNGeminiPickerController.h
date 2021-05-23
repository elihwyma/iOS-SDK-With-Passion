/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UINavigationController.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;

@protocol CNPickerControllerDelegate><UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController

{
    UITableViewController *_tableViewController;
    NSMutableArray *_geminiChannels;
    CNGeminiChannel *_preferredGeminiChannel;
    NSIndexPath *_selectedIndexPath;
}

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) NSMutableArray *geminiChannels;
@property (retain, nonatomic) CNGeminiChannel *preferredGeminiChannel;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (weak, nonatomic) id <CNPickerControllerDelegate><UINavigationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithGeminiResult:(id)arg1;
- (void)setGeminiResult:(id)arg1;
- (void)setGeminiResult:(id)arg1 reload:(_Bool)arg2;
- (void)didPickItem;
- (void)donePicker:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (id)indexPathForGeminiChannel:(id)arg1;
- (id)geminiChannelForIndexPath:(id)arg1;
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;

@end
