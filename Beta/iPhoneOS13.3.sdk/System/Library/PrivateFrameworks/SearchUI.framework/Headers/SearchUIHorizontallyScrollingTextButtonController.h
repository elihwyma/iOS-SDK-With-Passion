/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>

@class NSString, NUIContainerStackView, TLKTextButton;

@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController

@property (retain, nonatomic) TLKTextButton *button;
@property (retain, nonatomic) NUIContainerStackView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)setCardSectionRowModel:(id)arg1;
- (_Bool)wantsSeparators;
- (_Bool)scrollsWithoutStoppingAtBoundaries;

@end
