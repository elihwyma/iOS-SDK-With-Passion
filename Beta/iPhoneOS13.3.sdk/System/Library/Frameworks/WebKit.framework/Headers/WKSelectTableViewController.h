/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITableViewController.h>

@class WKContentView, WKSelectPopover;

__attribute__((visibility("hidden")))
@interface WKSelectTableViewController : UITableViewController

{
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    long long _numberOfSections;
    _Bool _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    WKSelectPopover *_popover;
    WKContentView *_contentView;
}

@property (nonatomic, readonly) _Bool shouldDismissWithAnimation;
@property (nonatomic) WKSelectPopover *popover;

- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;
- (long long)findItemIndexAt:(id)arg1;
- (struct OptionItem *)findItemAt:(id)arg1;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem *)arg2;

@end
