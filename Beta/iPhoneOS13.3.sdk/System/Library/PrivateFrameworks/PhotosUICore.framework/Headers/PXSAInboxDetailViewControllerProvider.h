/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXSAInboxDetailViewControllerProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)viewControllerForInboxModel:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToInboxModel:(id)arg1 inSharedAlbumActivityFeedViewController:(id)arg2;
- (long long)presentationTypeForInboxModel:(id)arg1;
- (id)_sharedAlbumViewControllerForSectionInfo:(id)arg1 fromViewController:(id)arg2;

@end
