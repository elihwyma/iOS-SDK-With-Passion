/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString;

@interface CAMShutterIndicatorView : UIView

{
    NSAttributedString *__indicatorText;
}

@property (nonatomic, readonly) NSAttributedString *_indicatorText;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_commonCAMShutterIndicatorViewInitialization;

@end
