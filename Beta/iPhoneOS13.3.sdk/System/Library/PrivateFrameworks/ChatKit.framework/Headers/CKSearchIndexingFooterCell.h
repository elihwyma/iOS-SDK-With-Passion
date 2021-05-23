/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface CKSearchIndexingFooterCell : UICollectionReusableView

{
    NSString *_titleString;
    NSString *_subtitleString;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) _Bool titleLabelHidden;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *subtitleString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end
