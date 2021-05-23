/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarDisplayingControllerDelegate;

@protocol AVTAvatarDisplayingController <Swift>

@property (weak, nonatomic) id <AVTAvatarDisplayingControllerDelegate> delegate;

- (unsigned short)reloadData;
- (unsigned short)initWithDataSource:environment: /* Error: Ran out of types for this method. */;
- (unsigned short)useAVTViewFromSession:withLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)stopUsingAVTViewSessionSynchronously:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToTransitionToVisible:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)displayAvatarForRecord:animated: /* Error: Ran out of types for this method. */;

@end
