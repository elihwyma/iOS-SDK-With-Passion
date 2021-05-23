/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView

{
    _Bool _shouldDisplayTitle;
    long long _style;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long style;
@property (nonatomic) _Bool shouldDisplayTitle;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithEntity:(id)arg1;

@end
