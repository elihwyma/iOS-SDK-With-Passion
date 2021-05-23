/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <UIKit/UITableViewController.h>

@class NSOrderedSet, WFHyperlinkFooterView, WFNetworkSettingsCellFactory;

@protocol WFDiagnosticsProviderContext;

@interface WFDiagnosticsTableViewController : UITableViewController

{
    id <WFDiagnosticsProviderContext> _context;
    NSOrderedSet *_sections;
    WFNetworkSettingsCellFactory *_cellFactory;
    WFHyperlinkFooterView *_linkFooterView;
}

@property (retain, nonatomic) id <WFDiagnosticsProviderContext> context;
@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory;
@property (retain, nonatomic) WFHyperlinkFooterView *linkFooterView;

- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)_refresh;
- (id)_defaultSections;
- (id)initWithDiagnosticsContext:(id)arg1;

@end
