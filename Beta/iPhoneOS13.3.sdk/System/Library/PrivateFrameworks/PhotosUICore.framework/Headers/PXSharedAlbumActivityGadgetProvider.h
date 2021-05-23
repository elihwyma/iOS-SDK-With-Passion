/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSMutableArray, NSString, PXFeedSectionInfosManager, PXGadgetNavigationHelper;

@protocol PXGadgetDelegate, PXGadgetTransition;

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider

{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    unsigned long long _estimatedGadgetCount;
    NSString *_invitationAlbumCloudGUID;
    NSMutableArray *_delayedChanges;
    long long _maxNumberOfSections;
}

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (nonatomic) unsigned long long estimatedGadgetCount;
@property (retain, nonatomic) NSString *invitationAlbumCloudGUID;
@property (retain, nonatomic) NSMutableArray *delayedChanges;
@property (nonatomic, readonly) long long maxNumberOfSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;

- (id)init;
- (void)dealloc;
- (void)_update:(id)arg1;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)gadget:(id)arg1 didAccept:(_Bool)arg2;
- (void)_processDelayedChanges;
- (void)_processDelayedChangesImmediatelyIfNecessary:(id)arg1;
- (unsigned long long)_indexForGadget:(id)arg1;
- (id)_indexesOfSectionInfosToDisplay:(unsigned long long)arg1;
- (id)_gadgetsForSectionIndexes:(id)arg1;

@end
