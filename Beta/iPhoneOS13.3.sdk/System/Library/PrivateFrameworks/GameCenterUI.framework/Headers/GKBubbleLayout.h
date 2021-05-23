/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface GKBubbleLayout : NSObject

{
    double _radius;
    NSSet *_visibleBubbleSet;
    NSArray *_bubbleViews;
    NSArray *_bubbleLocations;
    struct CGPoint _center;
}

@property (nonatomic) struct CGPoint center;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSSet *visibleBubbleSet;
@property (retain, nonatomic) NSArray *bubbleViews;
@property (retain, nonatomic) NSArray *bubbleLocations;

- (void)dealloc;
- (void)performLayout;
- (void)showBubble:(id)arg1 withSize:(struct CGSize)arg2 atAngle:(double)arg3;

@end
