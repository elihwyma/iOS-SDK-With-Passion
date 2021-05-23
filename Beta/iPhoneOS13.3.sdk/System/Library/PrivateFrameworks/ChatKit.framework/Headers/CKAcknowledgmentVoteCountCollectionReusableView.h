/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView

{
    UILabel *_countLabel;
}

@property (retain, nonatomic) UILabel *countLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithAcknowledgmentTally:(id)arg1;

@end
