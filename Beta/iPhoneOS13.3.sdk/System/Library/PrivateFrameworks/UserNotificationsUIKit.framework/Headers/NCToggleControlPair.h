/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NSArray, NSString;

@interface NCToggleControlPair : UIView <Swift>

{
    NSString *_materialGroupNameBase;
    NSArray *_toggleControls;
}

@property (nonatomic, readonly) NSArray *toggleControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)setLeadingControlExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithLeadingToggleControl:(id)arg1 trailingToggleControl:(id)arg2;
- (void)_handleTouchUpInside:(id)arg1 withEvent:(id)arg2;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (id)_leadingToggleControl;
- (id)_trailingToggleControl;
- (double)_effectiveInterControlPadding;

@end
