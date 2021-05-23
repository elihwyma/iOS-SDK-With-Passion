/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HMCameraClip;

@interface HUClipSpacerCollectionViewCell : UICollectionViewCell

{
    _Bool _spansMultipleDays;
    HMCameraClip *_clip;
    HMCameraClip *_previousClip;
}

@property (weak, nonatomic) HMCameraClip *clip;
@property (weak, nonatomic) HMCameraClip *previousClip;
@property (nonatomic) _Bool spansMultipleDays;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateWithClip:(id)arg1 previousClip:(id)arg2;

@end
