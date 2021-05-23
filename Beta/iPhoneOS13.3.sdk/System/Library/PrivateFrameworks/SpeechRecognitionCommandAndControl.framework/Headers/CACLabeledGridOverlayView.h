/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class CACAdaptiveBackdropView, CACZoomController, NSMutableArray;

@interface CACLabeledGridOverlayView : UIView

{
    NSMutableArray *_labeledElements;
    _Bool _showsNumbersInTopLeft;
    _Bool _showsElementsAsClickable;
    _Bool _isSmallEnoughForZooming;
    CACZoomController *_zoomController;
    CACAdaptiveBackdropView *_backdrop;
    UIView *_badgesContainer;
    UIView *_contrastBadgesContainer;
    NSMutableArray *_outOfBoxBadgeViews;
    NSMutableArray *_zoomedGridBadgeViews;
    NSMutableArray *_allBadgeViews;
    NSMutableArray *_separatorViews;
    NSMutableArray *_dimmingViews;
}

@property (nonatomic) _Bool isSmallEnoughForZooming;
@property (retain, nonatomic) CACZoomController *zoomController;
@property (retain, nonatomic) CACAdaptiveBackdropView *backdrop;
@property (retain, nonatomic) UIView *badgesContainer;
@property (retain, nonatomic) UIView *contrastBadgesContainer;
@property (retain, nonatomic) NSMutableArray *outOfBoxBadgeViews;
@property (retain, nonatomic) NSMutableArray *zoomedGridBadgeViews;
@property (retain, nonatomic) NSMutableArray *allBadgeViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (retain, nonatomic) NSMutableArray *dimmingViews;
@property (nonatomic) _Bool showsNumbersInTopLeft;
@property (nonatomic) _Bool showsElementsAsClickable;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)show;
- (void)hide;
- (id)_badgeViewContainerWithFrame:(struct CGRect)arg1 usingContrast:(_Bool)arg2;
- (void)clearLabeledElements;
- (void)addLabeledElements:(id)arg1;
- (void)zoomOverRect:(struct CGRect)arg1;
- (id)_newLineViewWithFrame:(struct CGRect)arg1;

@end
