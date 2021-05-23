/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface PUVideoListContentUnavailableView : UIView

{
    _Bool _needsUpdateConstraints;
    UILabel *_messageLabel1;
    UILabel *_messageLabel2;
    NSArray *_constraints;
    struct CGRect _safeAreaLayoutGuideFrameRect;
}

@property (retain, nonatomic) UILabel *messageLabel1;
@property (retain, nonatomic) UILabel *messageLabel2;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;
@property (nonatomic) struct CGRect safeAreaLayoutGuideFrameRect;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)_messageLabel;
- (void)_invalidateConstraints;
- (void)_updateConstraintsIfNeeded;
- (void)_setMessageText:(id)arg1 toLabel:(id)arg2;

@end
