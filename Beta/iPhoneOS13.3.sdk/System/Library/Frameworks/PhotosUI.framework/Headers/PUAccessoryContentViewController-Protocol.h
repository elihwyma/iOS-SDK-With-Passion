/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUAccessoryContentViewControllerDelegate;

@protocol PUAccessoryContentViewController <Swift>

@property (weak, nonatomic) id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) struct CGSize minimumContentSize;

- (unsigned short)setContentInsets:changeReason: /* Error: Ran out of types for this method. */;
- (unsigned short)contentAreaContainsPoint:inCoordinateSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)contentBoundsInCoordinateSpace: /* Error: Ran out of types for this method. */;

@end
