/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UITableViewCell.h>

@class AKSignature, UIImageView;

@interface AKSignatureTableViewCell : UITableViewCell

{
    AKSignature *_signature;
    UIImageView *_signatureImageView;
}

@property (retain, nonatomic) AKSignature *signature;
@property (retain, nonatomic) UIImageView *signatureImageView;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setImageFromSignature;

@end
