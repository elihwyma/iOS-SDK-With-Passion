/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView

{
    double _rating;
    NSArray *_starViews;
}

@property (retain, nonatomic) NSArray *starViews;
@property (nonatomic) double rating;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (void)updateStarViews;

@end
