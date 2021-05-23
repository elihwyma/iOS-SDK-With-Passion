/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView

{
    NSMutableArray *_keylines;
    unsigned long long _direction;
}

@property (nonatomic) unsigned long long direction;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateLayout;
- (void)setCardSectionSubviews:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)setDirection:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)triggerLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)templatedContentMargins;

@end
