/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIImageView.h>

@class UIImage;

@interface _NTKPageDot : UIImageView

{
    double _diameter;
    UIImage *_currentPageImage;
    UIImage *_otherPageImage;
    _Bool _representsCurrentPage;
}

@property (nonatomic) _Bool representsCurrentPage;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateImage;
- (id)initWithDiameter:(double)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3 forDevice:(id)arg4;

@end
