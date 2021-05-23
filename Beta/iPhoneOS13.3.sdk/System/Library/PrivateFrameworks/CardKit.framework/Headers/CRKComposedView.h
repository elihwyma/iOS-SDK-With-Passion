/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView

{
    NSMutableArray *_mutableCardSectionSubviews;
    NSArray *_cardSectionSubviews;
}

@property (retain, nonatomic) NSArray *cardSectionSubviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct UIEdgeInsets cardSectionContentMargins;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;

@end
