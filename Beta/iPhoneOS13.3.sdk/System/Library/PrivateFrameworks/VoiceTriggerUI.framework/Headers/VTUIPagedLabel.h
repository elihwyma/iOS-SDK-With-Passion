/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <UIKit/UIView.h>

@class UILabel, UIScrollView;

@interface VTUIPagedLabel : UIView

{
    UIScrollView *_scrollView;
    UIView *_instructionContainerLeft;
    UIView *_instructionContainerRight;
    UILabel *_instructionLabelLeft;
    UILabel *_instructionLabelRight;
    _Bool _isProximity;
}

- (void)clear;
- (void)setText:(id)arg1;
- (void)setupViews;
- (void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isProximity:(_Bool)arg2;

@end
