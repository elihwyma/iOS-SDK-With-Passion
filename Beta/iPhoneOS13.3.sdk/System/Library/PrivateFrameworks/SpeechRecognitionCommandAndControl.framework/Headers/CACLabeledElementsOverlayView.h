/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface CACLabeledElementsOverlayView : UIView

{
    NSMutableArray *_labeledElements;
    _Bool _positionAtLeft;
    _Bool _displayElementRectangles;
    UIView *_badgesContainer;
    UIView *_contrastBadgesContainer;
}

@property (nonatomic) _Bool displayElementRectangles;
@property (retain, nonatomic) UIView *badgesContainer;
@property (retain, nonatomic) UIView *contrastBadgesContainer;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_badgeViewContainerWithFrame:(struct CGRect)arg1 usingContrast:(_Bool)arg2;
- (id)_viewShowingDebuggingRect:(struct CGRect)arg1;
- (void)clearLabeledElements;
- (void)addLabeledElements:(id)arg1;

@end
