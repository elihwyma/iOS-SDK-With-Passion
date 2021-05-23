/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource

{
    Class _cellConfigurationClass;
    NSArray *_objects;
}

@property (retain, nonatomic) Class cellConfigurationClass;
@property (retain, nonatomic) NSArray *objects;

- (void)dealloc;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)cellHeightForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (id)objectForIndexPath:(id)arg1;

@end
