/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKProminenceView.h>

@interface SearchUISeparatorView : TLKProminenceView

{
    double _separatorHeight;
}

@property (nonatomic) double separatorHeight;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;

@end
