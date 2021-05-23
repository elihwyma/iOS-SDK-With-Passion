/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, NSString;

@protocol DOCFittingImageViewDelegate, DOCThumbnail;

@interface DOCFittingImageView : UIImageView

{
    id <DOCFittingImageViewDelegate> _delegate;
    id <DOCThumbnail> _thumbnail;
    NSLayoutConstraint *_aspectRatioConstraint;
    struct CGSize _fittingSize;
}

@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (weak, nonatomic) id <DOCFittingImageViewDelegate> delegate;
@property (retain, nonatomic) id <DOCThumbnail> thumbnail;
@property (nonatomic) struct CGSize fittingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)initCommon;
- (void)thumbnailLoaded:(id)arg1;

@end
