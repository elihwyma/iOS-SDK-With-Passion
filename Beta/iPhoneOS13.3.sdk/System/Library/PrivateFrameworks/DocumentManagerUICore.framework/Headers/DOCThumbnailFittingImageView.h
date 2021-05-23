/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCBorderedFittingImageView.h>

@class FPItem, NSURL;

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView

{
    FPItem *_item;
    NSURL *_url;
    long long _generatorGeneration;
}

@property (nonatomic, readonly) FPItem *item;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) long long generatorGeneration;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)updateThumbnail;
- (void)_commonInitWithSize:(struct CGSize)arg1;
- (void)updateThumbnailForItem:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 item:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 url:(id)arg2;

@end
