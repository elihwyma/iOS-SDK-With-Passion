/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSString, UITableViewDropProposal;

@protocol UIDropSession, _UITableViewDropCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropCoordinatorImpl : NSObject

{
    id <_UITableViewDropCoordinatorDelegate> _delegate;
    NSArray *_items;
    NSIndexPath *_destinationIndexPath;
    NSIndexPath *_translatedDestinationIndexPath;
    UITableViewDropProposal *_proposal;
    id <UIDropSession> _session;
}

@property (weak, nonatomic) id <_UITableViewDropCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath;
@property (retain, nonatomic, getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:) NSIndexPath *translatedDestinationIndexPath;
@property (retain, nonatomic) UITableViewDropProposal *proposal;
@property (retain, nonatomic) id <UIDropSession> session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *_items;
@property (nonatomic, readonly) NSIndexPath *_destinationIndexPath;
@property (nonatomic, readonly) UITableViewDropProposal *_dropProposal;
@property (nonatomic, readonly) id <UIDropSession> _dropSession;

- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
- (id)dropItem:(id)arg1 toTarget:(id)arg2;
- (id)initWithDelegate:(id)arg1 destinationIndexPath:(id)arg2 dropProposal:(id)arg3 session:(id)arg4;
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;
- (id)dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;
- (void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;
- (void)_dropItem:(id)arg1 toTarget:(id)arg2;
- (id)_sourceIndexPaths;
- (void)_translateDestinationIndexPath:(CDUnknownBlockType)arg1;
- (void)_translateSourceIndexPathsOfDropItems:(CDUnknownBlockType)arg1;
- (void)_dropItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;

@end
