/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionSnapshot;

@protocol PXCMMComposeRecipientSelectionManagerDelegate;

@interface PXCMMComposeRecipientSelectionManager : NSObject

{
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
    PXCMMComposeRecipientDataSource *_dataSource;
    id <PXCMMComposeRecipientSelectionManagerDelegate> _delegate;
    PXCMMComposeRecipientSelectionSnapshot *_selectionSnapshot;
}

@property (retain, nonatomic) PXCMMComposeRecipientSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly) PXCMMComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id <PXCMMComposeRecipientSelectionManagerDelegate> delegate;

+ (id)new;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)selectAll;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setSelectedState:(_Bool)arg1 atIndex:(long long)arg2;
- (id)_setSelectedState:(_Bool)arg1 forComposeRecipients:(id)arg2;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1;

@end
