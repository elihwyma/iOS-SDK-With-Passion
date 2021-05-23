/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <CRKCardSectionViewController.h>

@interface SUICKPInteractiveCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didEngageCardSection:(id)arg1;
- (_Bool)_shouldRenderButtonOverlay;
- (_Bool)_expectsSearchUIView;

@end
