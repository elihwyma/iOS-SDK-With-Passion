/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class UIViewController;

@protocol PXPeopleFlowViewController;

@protocol PXPeopleFlowController <Swift>

@property (nonatomic, readonly) _Bool hasNextViewController;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (nonatomic, readonly) _Bool hasPreviousViewController;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *previousViewController;

- (unsigned short)done: /* Error: Ran out of types for this method. */;
- (unsigned short)cancel: /* Error: Ran out of types for this method. */;

@end
