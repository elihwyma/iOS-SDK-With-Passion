/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface CAMBurstIndicatorView : UIView

{
    long long _layoutStyle;
    NSString *_contentSizeCategory;
    UIView *__backgroundView;
    UILabel *__countLabel;
    long long __numberOfPhotos;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UILabel *_countLabel;
@property (nonatomic, readonly) long long _numberOfPhotos;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;

- (id)initWithCoder:(id)arg1;
- (void)reset;
- (struct CGSize)intrinsicContentSize;
- (void)_updateAttributes;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_performCaptureAnimation;
- (long long)incrementWithCaptureAnimation:(_Bool)arg1;
- (void)finishIncrementingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)arg1;

@end
