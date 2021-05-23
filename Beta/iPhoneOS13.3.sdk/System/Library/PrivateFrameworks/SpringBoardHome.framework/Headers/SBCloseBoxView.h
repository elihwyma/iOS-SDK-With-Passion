/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBHomeScreenButton.h>

@class UITapGestureRecognizer;

@protocol SBCloseBoxViewDelegate, SBIconListLayout;

@interface SBCloseBoxView : SBHomeScreenButton

{
    UITapGestureRecognizer *_actionTapGestureRecognizer;
    id <SBCloseBoxViewDelegate> _delegate;
    id <SBIconListLayout> _listLayout;
}

@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (weak, nonatomic) id <SBCloseBoxViewDelegate> delegate;
@property (retain, nonatomic) id <SBIconListLayout> listLayout;

+ (struct UIEdgeInsets)backgroundInsets;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldTrack;

@end
