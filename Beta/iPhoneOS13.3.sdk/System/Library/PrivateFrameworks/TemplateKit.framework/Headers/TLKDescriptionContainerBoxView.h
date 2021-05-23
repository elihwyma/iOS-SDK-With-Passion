/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextView;

__attribute__((visibility("hidden")))
@interface TLKDescriptionContainerBoxView : NUIContainerBoxView

{
    TLKTextView *_descriptionViewBaselineView;
}

@property (retain, nonatomic) TLKTextView *descriptionViewBaselineView;

- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;

@end
