/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@protocol CAMControlDrawerExpandableButtonDelegate;

@protocol CAMControlDrawerExpandableButton

@property (nonatomic) struct UIEdgeInsets expansionInsets;
@property (weak, nonatomic) id <CAMControlDrawerExpandableButtonDelegate> delegate;
@property (nonatomic, getter=isExpanded) _Bool expanded;

- (unsigned short)setExpanded:animated: /* Error: Ran out of types for this method. */;

@end
