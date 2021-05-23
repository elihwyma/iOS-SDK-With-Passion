/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, UIImageView, UILabel, UITapGestureRecognizer;

@protocol SiriUITemplatedStackSnippetViewDataSource, SiriUITemplatedStackSnippetViewDelegate;

@interface SiriUITemplatedStackSnippetView : UIView

{
    UIView *_sashOverlayView;
    UIImageView *_sashImageView;
    UILabel *_sashTitleLabel;
    UILabel *_navigationTitleLabel;
    UIView *_touchInterceptView;
    NSMutableSet *_templateSubviews;
    NSMutableArray *_stackedSubviews;
    NSMutableArray *_keylines;
    double _auxiliaryViewHeight;
    UITapGestureRecognizer *_tapRecognizer;
    id <SiriUITemplatedStackSnippetViewDataSource> _dataSource;
    id <SiriUITemplatedStackSnippetViewDelegate> _delegate;
    UIView *_auxiliaryView;
}

@property (weak, nonatomic) id <SiriUITemplatedStackSnippetViewDataSource> dataSource;
@property (weak, nonatomic) id <SiriUITemplatedStackSnippetViewDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *stackedSubviews;
@property (nonatomic, readonly) UIView *auxiliaryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct UIEdgeInsets templatedContentMargins;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_handleTapGesture:(id)arg1;
- (double)desiredHeight;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)_triggerLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTemplateSubview:(id)arg1;
- (void)setAuxiliaryView:(id)arg1 atIndex:(unsigned long long)arg2 initialHeight:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)adjustAuxiliaryViewHeight:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
