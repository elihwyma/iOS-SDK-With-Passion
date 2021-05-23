/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKCSeparatorView;

@interface NTKCFaceDetailActionCell : NTKCDetailTableViewCell

{
    NTKCSeparatorView *_topSeparator;
}

+ (double)rowHeight;

- (void)layoutSubviews;
- (id)initWithAction:(long long)arg1;

@end
