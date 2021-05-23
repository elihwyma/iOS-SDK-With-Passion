/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVInfoHeaderView : UIView

{
    UIView *_headerView;
}

@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;

@end
