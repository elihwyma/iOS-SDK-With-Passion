/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@protocol SKUINavigationStackObserver;

@protocol SKUIObservableNavigationStack <Swift>

@property (weak, nonatomic) id <SKUINavigationStackObserver> navigationStackObserver;
@property (nonatomic, getter=isShowingNavigationStackRootContent) _Bool showingNavigationStackRootContent;

- (unsigned short)popToNavigationStackRootContentAnimated:withBehavior: /* Error: Ran out of types for this method. */;

@end
