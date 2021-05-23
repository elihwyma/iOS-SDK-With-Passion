/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXPeopleFlowViewControllerActionDelegate;

@protocol PXPeopleFlowViewController <Swift>

@property (retain, nonatomic) id context;
@property (nonatomic, readonly) struct CGSize preferredSize;
@property (weak, nonatomic) id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;

@end
