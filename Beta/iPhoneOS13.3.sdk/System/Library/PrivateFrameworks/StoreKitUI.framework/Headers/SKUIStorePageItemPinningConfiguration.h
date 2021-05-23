/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIStorePageItemPinningConfiguration : NSObject

{
    _Bool _hasValidPinningContentInset;
    _Bool _hasValidPinningStyle;
    _Bool _hasValidPinningGroup;
    _Bool _hasValidPinningTransitionStyle;
    long long _pinningStyle;
    long long _pinningGroup;
    long long _pinningTransitionStyle;
    struct UIEdgeInsets _pinningContentInset;
}

@property (nonatomic) struct UIEdgeInsets pinningContentInset;
@property (nonatomic, readonly) _Bool hasValidPinningContentInset;
@property (nonatomic) long long pinningStyle;
@property (nonatomic) long long pinningGroup;
@property (nonatomic, readonly) _Bool hasValidPinningStyle;
@property (nonatomic, readonly) _Bool hasValidPinningGroup;
@property (nonatomic) long long pinningTransitionStyle;
@property (nonatomic, readonly) _Bool hasValidPinningTransitionStyle;

- (void)invalidatePinningContentInset;
- (void)invalidatePinningStyle;
- (void)invalidatePinningGroup;
- (void)invalidatePinningTransitionStyle;

@end
