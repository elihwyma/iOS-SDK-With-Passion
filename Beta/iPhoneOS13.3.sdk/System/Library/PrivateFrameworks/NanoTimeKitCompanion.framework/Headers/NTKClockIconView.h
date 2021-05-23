/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@interface NTKClockIconView : UIView

{
    _Bool _paused;
    double _fullDiameter;
}

@property (nonatomic) double fullDiameter;
@property (nonatomic) _Bool paused;

- (id)borrowCircleView;
- (id)borrowTimeView;
- (void)restoreBorrowedViews;

@end
