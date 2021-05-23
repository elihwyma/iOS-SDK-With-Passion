/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIViewController.h>

@class NSString, TSWPHyperlinkField, TSWPHyperlinkSettingsViewController;

@interface TSWPHyperlinkActionsViewController : UIViewController

{
    TSWPHyperlinkField *_hyperlink;
    _Bool _readOnly;
    TSWPHyperlinkSettingsViewController *_hyperlinkSettingsViewController;
}

@property (retain, nonatomic) TSWPHyperlinkField *hyperlink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithHyperlink:(id)arg1 readOnly:(_Bool)arg2;
- (id)hyperlinkSettingsViewController;

@end
