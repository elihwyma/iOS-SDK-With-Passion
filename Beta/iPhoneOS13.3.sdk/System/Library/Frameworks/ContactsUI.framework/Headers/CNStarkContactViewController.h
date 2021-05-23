/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactContentViewController.h>

@class CNCardiMessageEmailGroup, CNPropertyBestIDSValueQuery, CNStarkContactNameView, NSArray;

@interface CNStarkContactViewController : CNContactContentViewController

{
    CNPropertyBestIDSValueQuery *_bestiMessageQuery;
    CNCardiMessageEmailGroup *_iMessageEmailGroup;
    NSArray *_activatedConstraints;
    CNStarkContactNameView *_contactNameView;
}

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestiMessageQuery;
@property (retain, nonatomic) CNCardiMessageEmailGroup *iMessageEmailGroup;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNStarkContactNameView *contactNameView;

+ (long long)tableViewStyle;
+ (_Bool)enablesTransportButtons;

- (void)dealloc;
- (id)title;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)initWithContact:(id)arg1;
- (void)setupConstraints;
- (void)updateFontColors;
- (id)displayHeaderView;
- (void)loadContactViewControllerViews;
- (_Bool)shouldDisplayAvatarHeaderView;
- (struct CGSize)setupTableHeaderView;
- (_Bool)isScrollViewControllingHeaderResizeAnimation:(id)arg1;
- (void)initializeTableViewsForHeaderHeight;
- (id)applyContactStyle;
- (void)queryComplete;
- (_Bool)isGeminiAvailable;
- (_Bool)hasTableViewHeaderFirstSection;
- (void)_initiateBestiMessagePropertyQuery;

@end
