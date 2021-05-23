/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface HUIconListView : UIView

{
    NSArray *_iconDescriptors;
    NSMutableArray *_iconViews;
}

@property (retain, nonatomic) NSMutableArray *iconViews;
@property (retain, nonatomic) NSArray *iconDescriptors;

- (id)init;
- (void)layoutSubviews;
- (void)_setUpIcons;
- (void)_prepareIconArray;
- (void)_addIconWithDescriptor:(id)arg1;
- (void)_layoutRightToLeft;
- (void)_layoutLeftToRight;
- (void)_addIconNamed:(id)arg1;

@end
