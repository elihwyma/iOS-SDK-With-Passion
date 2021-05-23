/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView

{
    UIImageView *_glyphImageView;
}

@property (retain, nonatomic) UIImageView *glyphImageView;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithAcknowledgmentTally:(id)arg1;

@end
