/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface _TVInspectorHighlightMetadataView : UIView

{
    UILabel *_descriptionLabel;
    UILabel *_frameLabel;
}

@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UILabel *frameLabel;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
