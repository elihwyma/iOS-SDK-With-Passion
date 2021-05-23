/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UICollectionReusableView.h>

@class NSString, SiriUISnippetViewController, UILabel;

@interface SiriUISashHeaderView : UICollectionReusableView

{
    UILabel *_headerLabel;
    NSString *_titleText;
}

@property (copy, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)arg1;

@end
