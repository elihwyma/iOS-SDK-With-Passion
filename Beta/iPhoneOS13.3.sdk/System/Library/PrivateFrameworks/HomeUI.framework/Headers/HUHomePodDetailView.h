/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@class HUMonogramView, UILabel, UIView;

@protocol HFStringGenerator, HUHomePodDetailViewDelegate;

@interface HUHomePodDetailView : UIButton

{
    _Bool _isAnimatingPop;
    unsigned long long _role;
    UILabel *_unitNameLabel;
    UIView *_unitImageView;
    id <HUHomePodDetailViewDelegate> _delegate;
    HUMonogramView *_unitBadgeLabel;
}

@property (nonatomic) _Bool isAnimatingPop;
@property (nonatomic, readonly) HUMonogramView *unitBadgeLabel;
@property (copy, nonatomic) id <HFStringGenerator> unitName;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic, readonly) UILabel *unitNameLabel;
@property (nonatomic, readonly) UIView *unitImageView;
@property (weak, nonatomic) id <HUHomePodDetailViewDelegate> delegate;

- (void)_setupConstraints;
- (id)initWithRole:(unsigned long long)arg1;
- (void)_updateImagesForRole;
- (void)_speakerTapped;

@end
