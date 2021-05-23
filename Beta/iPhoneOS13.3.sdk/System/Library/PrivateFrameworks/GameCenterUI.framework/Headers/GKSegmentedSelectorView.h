/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class NSLayoutConstraint, UISegmentedControl;

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView

{
    UISegmentedControl *_segmentedControl;
    id _target;
    NSLayoutConstraint *_widthConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) id target;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)drawsUnderline;
- (void)pinningStateChangedTo:(_Bool)arg1;

@end
