/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, NUViewNode;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell

{
    NUViewNode *_thumbnailImageViewNode;
    NUViewNode *_publisherLogoImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_dateLabelNode;
    NSString *_headlineIdentifier;
}

@property (nonatomic, readonly) NUViewNode *thumbnailImageViewNode;
@property (nonatomic, readonly) NUViewNode *publisherLogoImageViewNode;
@property (nonatomic, readonly) NUViewNode *titleLabelNode;
@property (nonatomic, readonly) NUViewNode *dateLabelNode;
@property (copy, nonatomic) NSString *headlineIdentifier;

+ (id)titleLabelFont;
+ (id)dateLabelFont;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end
