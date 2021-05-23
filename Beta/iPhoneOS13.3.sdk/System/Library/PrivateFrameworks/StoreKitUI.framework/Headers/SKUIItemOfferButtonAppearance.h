/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SKUIItemOfferButtonAppearance : NSObject

{
    UIColor *_buttonColor;
    UIColor *_confirmationColor;
}

@property (nonatomic, readonly) UIColor *buttonColor;
@property (nonatomic, readonly) UIColor *confirmationColor;

- (id)initWithColorScheme:(id)arg1;

@end
