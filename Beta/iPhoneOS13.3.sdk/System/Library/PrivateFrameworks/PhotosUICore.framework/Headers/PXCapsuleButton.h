/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIButton.h>

@class NSMutableDictionary, NSString, UIActivityIndicatorView;

@interface PXCapsuleButton : UIButton

{
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
    NSString *_maxContentSizeCategory;
}

@property (nonatomic) NSString *maxContentSizeCategory;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_titleFont;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)colorForState:(unsigned long long)arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)_backgroundImageWithColor:(id)arg1;

@end
