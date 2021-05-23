/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UITableViewController.h>

@class CACSpokenCommandItem, NSArray, NSDictionary;

@protocol CACCustomCommandApplicationViewControllerDelegate;

@interface CACCustomCommandApplicationViewController : UITableViewController

{
    id <CACCustomCommandApplicationViewControllerDelegate> _delegate;
    CACSpokenCommandItem *_commandItem;
    NSDictionary *_applicationIdentifiersToNames;
    NSArray *_sortedNames;
    NSArray *_sortedIdentifiers;
}

@property (retain, nonatomic) NSArray *sortedNames;
@property (retain, nonatomic) NSArray *sortedIdentifiers;
@property (weak, nonatomic) id <CACCustomCommandApplicationViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;

- (id)init;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isModalInPresentation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
