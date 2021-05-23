/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UITableViewDataSource;

@interface _UIFilteredDataSource : NSObject <Swift>

{
    _Bool _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
    long long _filterType;
    id <UITableViewDataSource> _tableDataSource;
}

@property (nonatomic) long long filterType;
@property (nonatomic) id <UITableViewDataSource> tableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;

@end
