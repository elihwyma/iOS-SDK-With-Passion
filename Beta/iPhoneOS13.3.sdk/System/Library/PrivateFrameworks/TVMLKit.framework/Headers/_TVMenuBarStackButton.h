/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIButton.h>

@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton

{
    NSDictionary *_tabBarItem;
}

@property (retain, nonatomic) NSDictionary *tabBarItem;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_configureSubviews;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_setSelectedOrHighlighted:(_Bool)arg1;
- (void)_updateImageEdgeInsets;

@end
