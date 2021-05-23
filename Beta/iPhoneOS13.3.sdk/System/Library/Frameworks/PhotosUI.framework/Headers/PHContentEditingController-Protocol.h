/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PHContentEditingController <Swift>

@property (nonatomic, readonly) _Bool shouldShowCancelConfirmation;

- (unsigned short)cancelContentEditing;
- (unsigned short)finishContentEditingWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startContentEditingWithInput:placeholderImage: /* Error: Ran out of types for this method. */;
- (unsigned short)canHandleAdjustmentData: /* Error: Ran out of types for this method. */;

@end
