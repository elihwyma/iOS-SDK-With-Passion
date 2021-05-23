/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactListViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class AVExternalDevice, CNContactListTableView, CNStarkNoContentBannerView, NSArray, NSString, UITableViewHeaderFooterView;

@interface CNStarkContactsListViewController : CNContactListViewController <Swift>

{
    _Bool _limitedUI;
    NSArray *_displayedContactProperties;
    CNContactListTableView *_contactListTableView;
    CNStarkNoContentBannerView *_overlayView;
    UITableViewHeaderFooterView *_siriHeaderView;
    AVExternalDevice *_externalDevice;
}

@property (retain, nonatomic) NSArray *displayedContactProperties;
@property (retain, nonatomic) CNContactListTableView *contactListTableView;
@property (retain, nonatomic) CNStarkNoContentBannerView *overlayView;
@property (retain, nonatomic) UITableViewHeaderFooterView *siriHeaderView;
@property (nonatomic) _Bool limitedUI;
@property (retain, nonatomic) AVExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)makeContactsDisplayedProperties;

- (id)init;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)contactListStyleApplier;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)setupDataSource;
- (id)initWithDataSource:(id)arg1 searchable:(_Bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(_Bool)arg4;
- (id)createTableView;
- (void)updateLimitedUI;
- (void)limitedUINotification:(id)arg1;
- (void)refreshTableViewHeaderWithSize:(struct CGSize)arg1;
- (void)handleSiriHeaderViewTap:(id)arg1;
- (void)postMessageOverlayIfNecessary;
- (void)showOverlayView;
- (void)showContactListTableView;

@end
