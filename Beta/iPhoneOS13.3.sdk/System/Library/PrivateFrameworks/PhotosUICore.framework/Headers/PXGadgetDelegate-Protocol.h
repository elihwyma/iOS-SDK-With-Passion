/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXGadgetNavigationHelper;

@protocol PXGadgetDelegate, PXGadgetTransition;

@protocol PXGadgetDelegate <Swift>

@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;

- (unsigned short)gadget:transitionToViewController:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)presentGadgetViewController:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissGadgetViewController:animated:completion: /* Error: Ran out of types for this method. */;

@end
