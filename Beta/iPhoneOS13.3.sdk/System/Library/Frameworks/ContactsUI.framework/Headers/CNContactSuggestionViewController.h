/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewController.h>

@class CNPropertyCell, CNPropertySuggestionAction, NSLayoutConstraint, UIButton, UILabel;

@protocol CNContactSuggestionViewControllerDataSource;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewController : UITableViewController

{
    CNPropertySuggestionAction *_action;
    CNPropertyCell *_propertyCell;
    id <CNContactSuggestionViewControllerDataSource> _dataSource;
    UILabel *_fromLabel;
    UILabel *_dateLabel;
    UILabel *_subjectLabel;
    UILabel *_contentLabel;
    UIButton *_addToContactButton;
    UIButton *_ignoreButton;
    NSLayoutConstraint *_addToContactLeadingMargin;
    NSLayoutConstraint *_ignoreTrailingMargin;
    NSLayoutConstraint *_fromLeadingMargin;
    NSLayoutConstraint *_dateTrailingMargin;
}

@property (retain, nonatomic) id <CNContactSuggestionViewControllerDataSource> dataSource;
@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *subjectLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *addToContactButton;
@property (retain, nonatomic) UIButton *ignoreButton;
@property (retain, nonatomic) NSLayoutConstraint *addToContactLeadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *ignoreTrailingMargin;
@property (retain, nonatomic) NSLayoutConstraint *fromLeadingMargin;
@property (retain, nonatomic) NSLayoutConstraint *dateTrailingMargin;
@property (retain, nonatomic) CNPropertySuggestionAction *action;
@property (retain, nonatomic) CNPropertyCell *propertyCell;

+ (id)viewControllerWithDataSource:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldShowPreview;
- (void)updatePreview;
- (_Bool)sectionAtIndexContainsAddAndIgnoreControls:(unsigned long long)arg1;
- (_Bool)shouldShowAddIgnoreControls;
- (void)addToContact:(id)arg1;
- (void)ignore:(id)arg1;
- (void)showSource:(id)arg1;

@end
