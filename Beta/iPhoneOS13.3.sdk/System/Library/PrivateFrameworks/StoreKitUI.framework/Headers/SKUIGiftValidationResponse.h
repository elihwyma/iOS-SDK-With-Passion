/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIGiftValidationResponse : NSObject

{
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    _Bool _valid;
}

@property (nonatomic, readonly) NSString *errorString;
@property (nonatomic, readonly) NSString *giftKey;
@property (nonatomic, readonly) NSString *totalGiftAmountString;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (id)initWithValidationDictionary:(id)arg1;

@end
