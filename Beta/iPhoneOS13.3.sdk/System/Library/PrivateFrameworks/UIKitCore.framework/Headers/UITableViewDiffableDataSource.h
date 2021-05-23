/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, __UIDiffableDataSource;

@interface UITableViewDiffableDataSource : NSObject <Swift>

{
    __UIDiffableDataSource *_impl;
}

@property (retain, nonatomic) __UIDiffableDataSource *impl;
@property (nonatomic) long long defaultRowAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)snapshot;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithViewUpdatesSink:(id)arg1;
- (_Bool)_isDiffableDataSource;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end
