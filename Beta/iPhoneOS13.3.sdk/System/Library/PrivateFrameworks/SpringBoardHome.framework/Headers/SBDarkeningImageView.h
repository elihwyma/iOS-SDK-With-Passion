/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIImageView.h>

@class CAFilter;

@interface SBDarkeningImageView : UIImageView

{
    CAFilter *_multiplyFilter;
    double _brightness;
}

@property (nonatomic) double brightness;

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end
