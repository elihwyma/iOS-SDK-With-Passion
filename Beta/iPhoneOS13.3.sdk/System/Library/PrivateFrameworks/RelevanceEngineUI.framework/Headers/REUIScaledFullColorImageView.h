/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@protocol CLKMonochromeFilterProvider;

@interface REUIScaledFullColorImageView : UIView

{
    id <CLKMonochromeFilterProvider> filterProvider;
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;

@end
