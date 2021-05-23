/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject

{
    NSString *_titleForTableHeader;
    UITableView *_tableView;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSArray *_sections;
    NSDictionary *_destinationsBySectionIndexTitle;
}

@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle;
@property (copy, nonatomic) NSString *titleForTableHeader;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)identityProviderForRowAtIndexPath:(id)arg1;
- (unsigned long long)_minimumProviderCountForIndexes;
- (id)_additionalProvidersRowTitle;
- (void)_scrollToTableHeaderView;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_textColorForRowAtIndexPath:(id)arg1;

@end
