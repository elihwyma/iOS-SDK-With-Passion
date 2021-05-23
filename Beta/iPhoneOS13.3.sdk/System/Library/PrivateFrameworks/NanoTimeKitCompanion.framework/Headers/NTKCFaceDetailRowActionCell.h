/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell

{
    NTKCSeparatorView *_topSeparator;
    _Bool _showsTopSeparator;
}

@property (nonatomic) _Bool showsTopSeparator;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)rowHeight;

@end
