/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource

{
    PXCMMMomentsInvitationsDataSourceState *__state;
}

@property (nonatomic, readonly) PXCMMMomentsInvitationsDataSourceState *_state;

- (id)initWithState:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)invitationForObjectID:(id)arg1;

@end
