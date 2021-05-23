/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIStoreIdentifier;

__attribute__((visibility("hidden")))
@interface SKUIBuyButtonDescriptor : NSObject

{
    _Bool _highlighted;
    _Bool _showingConfirmation;
    _Bool _showsUniversal;
    _Bool _shouldSuppressEnabled;
    _Bool _shouldSuppressCloudRestore;
    long long _buttonType;
    NSString *_buttonText;
    NSString *_confirmationText;
    unsigned long long _elementType;
    SKUIStoreIdentifier *_storeIdentifier;
    long long _itemIdentifier;
    NSString *_variantIdentifier;
    long long _progressType;
}

@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *confirmationText;
@property (nonatomic) unsigned long long elementType;
@property (retain, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) NSString *variantIdentifier;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool showingConfirmation;
@property (nonatomic) long long progressType;
@property (nonatomic) _Bool showsUniversal;
@property (nonatomic) _Bool shouldSuppressEnabled;
@property (nonatomic) _Bool shouldSuppressCloudRestore;

- (_Bool)canPerformLocalActionWithItemState:(id)arg1;
- (_Bool)canPersonalizeUsingItemState:(id)arg1;

@end
