/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@class SBIcon;

@protocol SBIconDragPreview

@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isFlocked) _Bool flocked;
@property (nonatomic) _Bool iconAllowsLabelArea;
@property (nonatomic) double iconContentScale;
@property (nonatomic) _Bool iconIsEditing;
@property (retain, nonatomic) SBIcon *icon;

- (unsigned short)draggingSourceDroppedWithOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)draggingSourceCancelAnimationCompleted;
- (unsigned short)dropDestinationAnimationCompleted;

@end
