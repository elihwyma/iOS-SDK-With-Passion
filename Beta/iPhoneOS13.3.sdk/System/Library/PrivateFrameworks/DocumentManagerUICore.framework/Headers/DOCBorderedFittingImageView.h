/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCFittingImageView.h>

@interface DOCBorderedFittingImageView : DOCFittingImageView

{
    _Bool _addDecoration;
}

@property (nonatomic) _Bool addDecoration;

- (void)layoutSubviews;
- (void)setFittingSize:(struct CGSize)arg1;
- (void)updateImage:(id)arg1 addDecoration:(_Bool)arg2;

@end
