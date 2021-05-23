/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVOrganizerCellView : UIView

{
    NSArray *_components;
    long long _contentVerticalAlignment;
    NSArray *_filteredComponents;
}

@property (copy, nonatomic, readonly) NSArray *filteredComponents;
@property (copy, nonatomic) NSArray *components;
@property (nonatomic) long long contentVerticalAlignment;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setComponentsNeedUpdate;
- (void)_resetSubviews;
- (void)_verticallyStackComponents:(id)arg1 alignment:(long long)arg2;
- (struct CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize)arg2;
- (void)_updateView:(id)arg1 maxViewWidth:(double)arg2;
- (long long)_alignmentFromView:(id)arg1;

@end
