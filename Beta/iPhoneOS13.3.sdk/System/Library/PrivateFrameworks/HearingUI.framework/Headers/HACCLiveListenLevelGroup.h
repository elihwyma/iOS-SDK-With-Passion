/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView

{
    NSMutableArray *_levels;
}

@property (retain, nonatomic) NSMutableArray *levels;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLevel:(double)arg1;

@end
