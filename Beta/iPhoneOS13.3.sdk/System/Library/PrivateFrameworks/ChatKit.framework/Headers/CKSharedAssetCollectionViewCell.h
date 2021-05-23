/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CKSharedAssetCollectionViewCell : UICollectionViewCell

{
    UIView *_previewView;
    UILabel *_previewTitleLabel;
    NSString *_name;
    NSString *_url;
    UIView *_previewTitleContainerView;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIView *previewTitleContainerView;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UILabel *previewTitleLabel;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)cornerRadius;
- (id)formattedTitleFromPreviewTitle:(id)arg1;

@end
