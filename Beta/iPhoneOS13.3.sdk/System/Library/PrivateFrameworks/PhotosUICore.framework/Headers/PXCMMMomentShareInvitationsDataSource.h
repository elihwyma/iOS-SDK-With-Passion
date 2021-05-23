/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource

{
    PXCMMMomentShareInvitationsDataSourceState *_state;
}

@property (nonatomic, readonly) PXCMMMomentShareInvitationsDataSourceState *state;

+ (id)new;

- (id)init;
- (id)initWithState:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)invitationForObjectID:(id)arg1;

@end
