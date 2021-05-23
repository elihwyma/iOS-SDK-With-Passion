/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@protocol _CNAvatarViewDelegate;

@interface _CNAvatarView : UIView

{
    id <_CNAvatarViewDelegate> _delegate;
    NSArray *_likenessProviders;
    NSArray *_likenessViews;
    NSArray *_subviewsConstraints;
}

@property (copy, nonatomic) NSArray *likenessViews;
@property (copy, nonatomic) NSArray *subviewsConstraints;
@property (weak, nonatomic) id <_CNAvatarViewDelegate> delegate;
@property (retain, nonatomic) NSArray *likenessProviders;

+ (_Bool)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (void)setupSubviews;

@end
