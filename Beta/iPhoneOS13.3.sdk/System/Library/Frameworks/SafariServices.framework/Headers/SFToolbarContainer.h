/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class UIToolbar;

__attribute__((visibility("hidden")))
@interface SFToolbarContainer : UIView

{
    UIToolbar *_toolbar;
    double _minimumWidth;
    struct UIEdgeInsets _toolbarInsets;
}

@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic) double minimumWidth;
@property (nonatomic) struct UIEdgeInsets toolbarInsets;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithToolbar:(id)arg1;
- (CDStruct_c3b9c2ee)widthRangeUsingNarrowMetrics:(_Bool)arg1;

@end
