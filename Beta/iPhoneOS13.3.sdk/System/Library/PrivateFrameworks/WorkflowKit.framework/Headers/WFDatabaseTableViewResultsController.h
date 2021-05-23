/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>

@class NSString;

@interface WFDatabaseTableViewResultsController : WFDatabaseSectionedResultsController

{
    _Bool _scrollToInsertions;
    _Bool _lastChangeIsUserDriven;
    _Bool _loaded;
}

@property (nonatomic, getter=isLoaded) _Bool loaded;
@property (nonatomic) _Bool scrollToInsertions;
@property (nonatomic) _Bool lastChangeIsUserDriven;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4;
- (id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;

@end
