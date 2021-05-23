/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSDictionary, UIView;

@protocol PUMutableReviewScreenBarsModel

@property (copy, nonatomic) NSDictionary *availableItemsByIdentifier;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) _Bool shouldPlaceScrubberInScrubberBar;
@property (nonatomic, getter=isTransitioningWithCamera) _Bool transitioningWithCamera;
@property (nonatomic) _Bool useVerticalControlLayout;
@property (nonatomic) struct CGPoint controlCenterAlignmentPoint;

- (unsigned short)setControlCenterAlignmentPoint:forceLayout: /* Error: Ran out of types for this method. */;

@end
