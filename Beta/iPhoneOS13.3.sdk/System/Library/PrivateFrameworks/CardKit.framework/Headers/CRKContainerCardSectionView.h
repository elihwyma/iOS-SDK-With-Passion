/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIView.h>

@class NSString;

@protocol CRKComposableView;

@interface CRKContainerCardSectionView : UIView

{
    UIView *_userInputEventInterceptView;
    UIView<CRKComposableView> *_composedSuperview;
    NSString *_cardSectionViewIdentifier;
    UIView *_contentView;
    struct CGSize _contentSize;
}

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) _Bool interceptsTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)removeFromComposedSuperview;

@end
