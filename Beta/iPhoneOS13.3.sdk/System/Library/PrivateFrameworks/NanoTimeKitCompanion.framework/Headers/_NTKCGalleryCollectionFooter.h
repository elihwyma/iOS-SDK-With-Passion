/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface _NTKCGalleryCollectionFooter : UICollectionReusableView

{
    UILabel *_label;
}

@property (retain, nonatomic) NSString *text;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_fontSizeDidChange;

@end
