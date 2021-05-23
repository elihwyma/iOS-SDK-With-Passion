/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <UIKit/UIView.h>

@class NSString;

@protocol CRKComposableView;

@interface UIView (_CRKCardViewVisibility)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *cardSectionViewIdentifier;
@property (weak, nonatomic) UIView<CRKComposableView> *composedSuperview;

+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;

- (void)removeFromComposedSuperview;
- (_Bool)_crk_otherSubviewsOccludeSubview:(id)arg1;
- (_Bool)_crk_subviewIsVisible:(id)arg1;

@end
