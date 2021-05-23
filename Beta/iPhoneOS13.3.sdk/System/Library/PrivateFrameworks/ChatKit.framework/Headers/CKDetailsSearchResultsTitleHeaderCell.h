/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSearchResultsTitleHeaderCell.h>

@class CALayer;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

{
    CALayer *_bottomHairline;
}

@property (retain, nonatomic) CALayer *bottomHairline;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end
