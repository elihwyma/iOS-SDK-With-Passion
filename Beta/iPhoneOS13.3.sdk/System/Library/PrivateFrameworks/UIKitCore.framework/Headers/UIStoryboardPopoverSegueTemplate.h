/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate

{
    unsigned long long _permittedArrowDirections;
    NSArray *_passthroughViews;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
}

@property (nonatomic) unsigned long long permittedArrowDirections;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UIView *anchorView;
@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;

@end
