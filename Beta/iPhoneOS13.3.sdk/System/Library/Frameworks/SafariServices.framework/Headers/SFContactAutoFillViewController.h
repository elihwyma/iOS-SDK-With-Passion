/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class CNContact, NSArray;

@protocol SFContactAutoFillViewControllerFiller;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillViewController : UITableViewController

{
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
    id <SFContactAutoFillViewControllerFiller> _autoFiller;
}

@property (weak, nonatomic) id <SFContactAutoFillViewControllerFiller> autoFiller;

- (id)properties;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)autoFill:(id)arg1;
- (void)_cancel:(id)arg1;
- (id)initWithMatches:(id)arg1 contact:(id)arg2;
- (id)matchesForProperty:(id)arg1;
- (id)valuesFromPropertyMatches:(id)arg1;
- (id)_valueForProperty:(id)arg1 identifier:(id)arg2;

@end
